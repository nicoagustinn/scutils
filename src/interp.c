#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 256

int 
main(int argc, char *argv[])
{
	char *interpStdin = malloc(sizeof(char)*BUFFSIZE);

	while (*argv)
	{
		printf("Perla -> ");
		fgets(interpStdin,BUFFSIZE,stdin);
		interpStdin[strcspn(interpStdin, "\n")] = 0;
		if (strcmp(interpStdin,"exit")==0)
		{
			puts("Goodbye!"); exit(0);
		}
	}
}
