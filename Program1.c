#include <stdio.h>
#define PI 3.14

float area;

void main() {
    float r;  
    printf("Enter the radius of the circle: ");  
    scanf("%f", &r);
    area = PI * r * r;
    printf("Area of the circle = %f\n", area);  
    getchar();  
}