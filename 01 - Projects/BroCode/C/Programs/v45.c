#include <stdio.h>

int main(){
    
    // Bitwise Operator = special operators used in bit level programming
    //                      (knowing binary is important for this topic)
    
    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    int x = 6;      // 6  = 00000110
    int y = 12;     // 12 = 00001100
    int z = 0;      // 0  = 00000000

    z = x & y;      //    = 00000100 = 4
    printf("AND = %d\n",z);

    z = x | y;     //     = 00001110 = 14
    printf("OR = %d\n",z);

    z = x ^ y;     //     = 00001010 = 10
    printf("XOR = %d\n",z);

    z = x << 1;    //     = 00001100 = 12
    printf("left shift = %d\n",z);

    z = y >> 2;    //     = 00000011 = 3
    printf("right shift = %d\n",z);
    
    return 0;
}