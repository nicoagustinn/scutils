#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	FILE * fp;
	if (argc >=3)
		return 1;
	char *file = argv[1];
	fp = fopen (file, "w+");
	//printf("%s\n",file); <- Leave for verbosity I guess
	fclose(fp);
   
	return 0;
}
