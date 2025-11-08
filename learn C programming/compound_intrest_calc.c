#include<stdio.h>
#include<math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timescompounded = 0;
    double total = 0.0;

    printf("Compound intrest calculator");
    printf("Enter the principal(P): ");
    scanf("%lf", &principal);

    printf("Enter the intrest rate: ");
    scanf("%lf", &rate);

    printf("Enter the no of years: ");
    scanf("%d", &years);

    printf("Enter the no of times compounded in per year: ");
    scanf("%lf", &timescompounded);

    total = principal*(1+rate/timescompounded, timescompounded*years);
    printf("the total returns is: %lf", total);

    return 0;
}