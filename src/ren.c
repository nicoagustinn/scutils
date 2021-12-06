#include<stdio.h>
//
//	YES I WILL REMOVE THE VERBOSITY
//

int ren(char* oldName,char* newName){
	printf("\nOld: %s",oldName);
	printf("\nNew: %s",newName);
    if (rename(oldName, newName) == 0)
        printf("\nFile renamed successfully!\n");
    else
    printf("Unable to rename files!\nWrong name?\nNot enough permissions?\n");

    return 0;
}
int main(int argc,char* argv[]){
    int counter;
    printf("%s",argv[0]);

    if(argc==3){
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(counter=0;counter<argc;counter++)
            printf("\nargv[%d]: %s",counter,argv[counter]);
        ren(argv[1],argv[2]);}
    else
    	return 1;

    return 0;
}
