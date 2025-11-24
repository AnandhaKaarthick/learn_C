#include<stdio.h>

int main(){
    int a;
    printf("Enter a integer: ");
    scanf("%d", &a);

    int sign = (a>0) - (a<0);
    switch(sign){
        case 1:
            printf("The entered number is positive");
            break;
        case -1:
            printf("The entered number is negative");
            break;
        default:
            printf("the entered number is zero");
            break;
    }
}