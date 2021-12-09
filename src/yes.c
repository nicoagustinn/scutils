#include<stdio.h>
int main(int argc,char *argv[]){
	const char *s;
	s = argc ? argv[0] : "y";
	for (;;)
		puts(s);
}
