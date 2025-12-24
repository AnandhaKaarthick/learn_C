#include<stdio.h>
#include<conio.h>

int main(){
    int choice, num1, num2;
    printf("The choice's are....");
    printf("\n1. addition\n2. Subtraction\n3. Multiplication\n4. division");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);

    switch(choice){
        case 1:
            printf("The addition of the numbers are: %d + %d = %d", num1, num2, num1+num2);
            break;
        case 2: 
            printf("The subtraction of the numbers are: %d - %d = %d", num1, num2, num1-num2);
            break;
        case 3: 
            printf("The Multiplication of the numbers are: %d x %d = %d", num1, num2, num1*num2);
            break;
        case 4: 
            printf("The Division of the numbers are: %d/%d = %f", num1, num2, num1/num2);
            break;

    }

    return 0;

}