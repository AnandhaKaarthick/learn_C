#include<stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n, fact;
    printf("Enter the element to fint the factorial: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of the number is: %d", fact);
    return 0;
}