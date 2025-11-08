#include <stdio.h>
int main(){
    float r, area, circum, pi = 3.14;
    printf("Enter the radius: ");
    scanf("%f", &r);
    area = pi*r*r;
    circum = 2*pi*r;
    printf("The area for the entered radius is: %f \n", area);
    printf("The Circumference of the entered radius is: %f", circum);

    return 0;
}