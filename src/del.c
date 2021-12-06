#include <stdio.h>
 
int main(int argc, char *argv[]) {
	if (argc>=3){
		printf("Rip");
		return 1;}
    if (remove(argv[1]) == 0) {
        printf("The file %s was deleted successfully.",argv[1]);
    } else {
        printf("The file was not deleted.");
    }
    return 0;
}
