// Program to calculate the area of triangle

#include <stdio.h>

int main(){

    float H, B, area;
    printf("Enter the height of the triangle: ");
    scanf("%f", &H);
    printf("Enter the breadth of the triangle: ");
    scanf("%f", &B);
    area = 0.5*B*H;
    printf("The area of triangle is: %f", area);


    return 0; 
}