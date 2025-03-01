#include <stdio.h>

int main(){
    
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the Radius of the Circle:\t");
    scanf("%lf", &radius);

    circumference = 2 * radius * PI;
    area = radius * radius * PI;

    printf("The Circumference is:\t %lf\n", circumference);
    printf("The area is:\t %lf\n", area);

    return 0;
}