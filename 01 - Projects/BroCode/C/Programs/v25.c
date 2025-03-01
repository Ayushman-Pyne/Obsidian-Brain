#include <stdio.h>

void hello(char[], int);  // function prototype

int main(){
    
    // function prototype

    // function declaration, without a body, before main()
    // ensures that calls to a function are made with the correct arguments
    
    char name[] = "Arceus";
    int age = 19;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){
    printf("Hello, %s\n", name);
    printf("You are %d years old.\n", age);
}