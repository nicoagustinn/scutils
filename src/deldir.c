#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int rm_path(char *);
static void usage(void);

int main(int argc, char *argv[]) {
	int ch, errors;
	int pflag;

	pflag = 0;
	while ((ch = getopt(argc, argv, "p")) != -1)
		switch(ch) {
		case 'p':
			pflag = 1;
			break;
		default:
			usage();
		}

	argc -= optind;
	argv += optind;

	if (argc == 0)
		usage();

	for (errors = 0; *argv; argv++) {
		if (rmdir(*argv) == -1) {
			warn("%s", *argv);
			errors = 1;
		} else if (pflag)
			errors |= rm_path(*argv);
	}
	return (errors);
}

int rm_path(char *path) {
		if (rmdir(path) == -1) {
			warn("%s", path);
			return 1;
		}
	return 0;
}

static void usage(void) {
	puts("Usage: deldir [-p] directory");
	exit(1);
}
