#include <stdio.h>
#include <ctype.h>

int main(){
    
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c" , &unit);

    switch(unit){
        case 'C':
        case 'c':
            printf("Enter the Temperature in Celsius: ");
            scanf("%f", &temp);
            temp = (temp * 9 / 5) + 32;
            printf("\nThe Temperature in Farenheit is: %.1f\n", temp);
            break;
        case 'F':
        case 'f':
            printf("Enter the Temperature in Farenheit: ");
            scanf("%f", &temp);
            temp = ((temp - 32) * 5) / 9;
            printf("\nThe Temperature in Celsius is: %.1f\n", temp);
            break;
        default:
            printf("%c IS NOT A VALID UNIT OF MEASUREMENT.", unit);
    }

    return 0;
}