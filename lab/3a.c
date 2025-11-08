#include<stdio.h>
#include<conio.h>

int main(){
    int n, a, digit, cube, sum = 0;

    printf("enter the number to be verified: ");
    scanf("%d", &n);
    a = n;

    while(n>0){
        digit = n%10;
        cube = digit*digit*digit;
        sum += cube;
        n /= 10;
    }

    if(sum == a){
        printf("the entered number %d is Amstrong number");
    }else{
        printf("The entered number is not a amstrong number");
    }

    getch();
    return 0;
}