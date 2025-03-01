#include <stdio.h>

int main(){

    /*  variable =  Allocated space in memory to store a value.
                    We refer to a variable's name to access the stored value.
                    That variable now behaves as if it was the value it contains.
                    BUT we need to declare what type of data we are storing.
    */
    
    int x; // Declaration
    x = 123; // Initialization
    int y = 321; // Declaration + Initialization

    int age = 21; // integer
    float gpa = 2.05; // floating point number
    char grade = 'C'; // single character
    char name[] = "Arceus"; // arrays of characters

    printf("Hello, %s,\n", name);
    printf("You are %d years old.\n", age);
    printf("Your Average Grade is: %c\n", grade);
    printf("Your GPA is %f \n", gpa);

    return 0;
}