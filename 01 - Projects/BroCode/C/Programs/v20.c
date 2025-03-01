#include <stdio.h>
#include <stdbool.h>

int main(){
    
    // logical operator = ! (NOT) reverses the state of a condition

    bool sunny = true;
    
    if(!sunny){
        printf("It is cloudy outside.");
    }
    else{
        printf("It is sunny outside.");
    }

    return 0;
}