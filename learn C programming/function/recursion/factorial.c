#include<stdio.h>

int fact(int n){
    if(n == 1|| n==0){
        return 1;
    }

    else{
        return n*fact(n - 1);
    }
}

int main(){
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);

    result = fact(n);
    printf("The factorial of the number is: %d", result);

    return 0;
}