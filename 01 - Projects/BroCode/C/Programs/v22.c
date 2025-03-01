#include <stdio.h>

void birthday(char name[], int age){
    printf("Happy Birthday To You!\n");
    printf("Happy Birthday To You!\n");
    printf("Happy Birthday To You, Dear %s!\n", name);
    printf("You are %d years old!\n", age);
}

int main(){
    char name[] = "Arceus";
    int age = 19;

    birthday(name, age);

    return 0;
}