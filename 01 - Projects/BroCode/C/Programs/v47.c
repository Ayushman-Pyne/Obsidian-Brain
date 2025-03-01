#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old.", *pAge);
}

int main(){
    
    // pointers = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //            some tasks are performed more easily with pointers
    //            * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL;   // good practice to assign NULL to a pointer declaration
    pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of age: %d\n", age);

    printf("address of pAge: %p\n", pAge);
    printf("value of pAge: %d\n", *pAge);   // dereferencing

    printf("size of age: %d bytes\n", sizeof(age));
    printf("address of pAge: %d bytes\n", sizeof(pAge));

    printAge(pAge);
    
    return 0;
}