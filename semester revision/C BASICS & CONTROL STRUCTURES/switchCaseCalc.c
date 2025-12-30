#include<stdio.h>

int main(){
    int choice, a, b;
    printf("Enter the choice...\n");
    printf("1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
    printf("Enter the option: ");
    scanf("%d", &choice);
    printf("Enter the numbers 1: ");
    scanf("%d", &a);
    printf("ENter the number 2: ");
    scanf("%d", &b);
    switch (choice){
        case 1:
            printf("The Addition of numbers are: %d", a+b);
            break;
    
        case 2:
            printf("The Subtraction of the numbers are: %d", a-b);
            break;
        case 3:
            printf("The multiplication of the numbers are: %d", a*b);
            break;
        case 4:
            printf("The division of the numbers are: %d", a/b);
            break;

        default:
            printf("Invalid Choice");
            break;
    }
    return 0;

}