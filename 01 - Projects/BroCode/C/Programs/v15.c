#include <stdio.h>

int main(){
    
    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases.

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
        case 'a':
            printf("Perfect!\n");
            break;
        case 'B':
        case 'b':
            printf("You did good!\n");
            break;
        case 'C':
        case 'c':
            printf("You did okay!\n");
            break;
        case 'D':
        case 'd':
            printf("Atleast it's not an F\n");
            break;
        case 'F':
        case 'f':
            printf("You Failed\n");
            break;
        default:
            printf("PLease enter only valid Grades");
    }
    
    return 0;
}