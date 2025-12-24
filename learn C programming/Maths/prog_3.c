// C Program to Add Two Numbers

#include <stdio.h>
int main(){
    
    int A, B, sum=0;

    printf("Enter two number A and B: ");
    scanf("%d%d", &A, &B);
    sum = A+B;
    printf("The sum of two numbers is: %d", sum);

    return 0;

}