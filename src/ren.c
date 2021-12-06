#include<stdio.h>
  
int ren(char oldName[128],char newName[128]){
    // Path to old and new files
    // Input old and new file name
    printf("Enter old file path: ");
    scanf("%s", oldName);

    printf("Enter new file path: ");
    scanf("%s", newName);
    // rename old file with new name
    if (rename(oldName, newName) == 0)
        printf("File renamed successfully.\n");
    else
    printf("Unable to rename files!\nWrong name?\nNot enough permissions?\n");

    return 0;
}
int main(int argc,char* argv[]){
    int counter;
    printf("%s",argv[0]);
    if(argc==1)
        printf("\nUsage: (usage goes here)");
    if(argc==2){
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(counter=0;counter<argc;counter++)
            printf("\nargv[%d]: %s",counter,argv[counter]);
    }
    if (argc>=3)
    	return 1;
    return 0;
}
