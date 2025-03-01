#include <stdio.h>

int main(){
    FILE *pF = fopen("A:\\Languages\\C\\BROCODE\\Cfile\\test.txt", "w");
    
    fprintf(pF, "Spongebob Squarepants");

    fclose(pF);

    // if(remove("test.txt") == 0){
    //     printf("That file was deleted succesfully!");
    // }
    // else{
    //     printf("That file was not deleted!");
    // }

    return 0;
}