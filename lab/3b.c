// sum of first n natural numbers

#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("enter the n number: ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++){
        sum += i;
    }
    printf("the sum is: %d", sum);
    return 0;
}