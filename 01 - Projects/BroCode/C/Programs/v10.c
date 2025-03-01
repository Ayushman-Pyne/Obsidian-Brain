#include <stdio.h>
#include <string.h>

int main(){

    char name[25]; //bytes
    int age;

    printf("What's your name?\t");
    // scanf("%s", &name); // upto any white spaces
    fgets(name, 25, stdin); // can read white spaces

    //When using fgets to read input from stdin, the function reads until it encounters a newline character
    
    name[strlen(name)-1] = '\0'; 

    printf("How old are You?\t");
    scanf("%d", &age);

    printf("Hello, %s!\n", name);
    printf("You are  %d years old.\n", age);

    return 0;
}