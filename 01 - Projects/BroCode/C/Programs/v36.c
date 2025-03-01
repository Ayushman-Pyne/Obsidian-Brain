#include <stdio.h>
#include <string.h>

int main(){
    
    // char x = 'X';
    // char y = 'Y';

    // printf("X = %c\n", x);
    // printf("Y = %c\n", y);

    // char temp;
    // temp = x;
    // x = y;
    // y = temp;

    char x[] = "Water";
    char y[] = "Lemonade";

    printf("X = %s\n", x);
    printf("Y = %s\n", y);

    char temp[25];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("X = %s\n", x);
    printf("Y = %s\n", y);

    return 0;
}