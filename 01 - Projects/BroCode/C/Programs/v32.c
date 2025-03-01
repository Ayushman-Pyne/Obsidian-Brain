#include <stdio.h>

int main(){
    
    // array = a data structure that can store many values of the same data type

    // double prices[5] = {5.0, 10.0, 15.0, 25.0, 20.0};

    double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};

    prices[5] = 20.0;
    prices[6] = 5.0; 
    prices[7] = 10.0;
    prices[8] = 15.0;
    prices[9] = 25.0;

    // char name[] = "Arceus";

    printf("$%.2lf\n", prices[3]);
    
    return 0;
}