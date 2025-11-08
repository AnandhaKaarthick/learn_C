// start a program
// use Arithemetic operators(+, -, *, /, %)
// use increment operators(i++, i--)
// use comparison operators(>,<, >=, <=, ==, !=)
// use Bitwise operators(~, ^, |, &)


#include<stdio.h>

int main(){
    int a = 10, b = 5;

    printf("\nArithmetic Operators\n");
    printf("Addition: %d\n", a+b);
    printf("Subtraction: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);

    printf("\nIncrement and Decrement Operators\n");
    printf("Original value of a: %d\n", a);
    printf("Post-increment (a++): %d\n", a++);
    printf("After post-increment: %d\n", a);
    
    printf("Original value of b: %d\n", b);
    printf("Pre-decrement (--b): %d\n", --b);
    printf("After pre-decrement: %d\n", b);

    printf("Bitwise operators");
    printf("%d \n", a&b);
    printf("%d \n", a|b);
    printf("%d \n", a^b);
    printf("%d \n", ~a);

    printf("ternary Operator");
    int max = (a>b)? a:b;
    printf("%d", max);

    return 0;
}