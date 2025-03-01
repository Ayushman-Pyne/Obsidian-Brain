#include <stdio.h>
#include <math.h>

int main(){
    
    double A;
    double B;
    double C;

    printf("Enter Side A:\t");
    scanf("%lf", &A);

    printf("Enter Side B:\t");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);
    
    printf("The Hypotenuse is: %lf\n", C);

    return 0;
}