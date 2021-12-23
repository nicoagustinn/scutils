#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int nflag;

	if (*++argv && !strcmp(*argv, "-n")) {
		++argv;
		nflag = 1;
	}
	else
		nflag = 0;
	while (*argv) {
		(void)fputs(*argv, stdout);
		if (*++argv)
			putchar(' ');
	}
	if (!nflag){putchar('\n');}
	return 0;
}
