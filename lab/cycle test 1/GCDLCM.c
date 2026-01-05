#include<stdio.h>

int GCD(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b){
    return (a*b)/GCD(a,b);
}

int main(){
    int a, b;
    printf("Enter the number1: ");
    scanf("%d", &a);
    printf("Enter the number2: ");
    scanf("%d", &b);

    int gcd = GCD(a, b);
    int lcm = LCM(a, b);

    printf("The greatest common divisor is: %d\n", gcd);
    printf("The lowest common multiple is: %d", lcm);

    return 0;   
}