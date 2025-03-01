#include <stdio.h>

int findMax(int a, int b){
    return (a > b)? a : b;
}

int main(){
    
    // ternary operator = shortcut to if/else when assigning/ returning a value
    // (condition) ? value if true : value if false

    int max = findMax(3 , 4);

    printf("Max: %d", max);
    
    return 0;
}