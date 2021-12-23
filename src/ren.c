#include<stdio.h>

// You can remove all '//' at the beginning of a line to enable verbosity.

int ren(char* oldName,char* newName){
    if (rename(oldName, newName) == 0)
        printf("\n%s -> %s\n",oldName,newName);
    else
    printf("Unable to rename files!\nWrong name?\nNot enough permissions?\n");

    return 0;
}
int main(int argc,char *argv[]){
    //int counter;
    printf("%s",argv[0]);

    if(argc==3){
        //printf("\nNumber Of Arguments Passed: %d",argc);
        //printf("\n----Following Are The Command Line Arguments Passed----");
        //for(counter=0;counter<argc;counter++)
        //    printf("\nargv[%d]: %s",counter,argv[counter]);
        ren(argv[1],argv[2]);}
    else
    	return 1;

    return 0;
}
