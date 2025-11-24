#include<stdio.h>

int main(){
    int choice;
    printf("1.add\n2.subtraction\n3.check if even or odd\n4.Exit\n");
    scanf("%d", &choice);
    
    switch(choice){
        case 1: {
            int a, b, sum;
            printf("Enter the number 1: ");
            scanf("%d", &a);
            printf("Enter the number 2: ");
            scanf("%d", &b);
            sum = a + b;
            printf("The addition of two numbers is: %d\n", sum);
            break;
        }
        
        case 2: {
            int a, b, diff;
            printf("Enter the number 1: ");
            scanf("%d", &a);
            printf("Enter the number 2: ");
            scanf("%d", &b);
            diff = a - b;
            printf("The subtraction of two numbers is: %d\n", diff);
            break;
        }

        case 3: {
            int a;
            printf("Enter the number to be checked: ");
            scanf("%d", &a);
            if(a % 2 == 0){
                printf("The entered number is even\n");
            } else {
                printf("The entered number is odd\n");
            }
            break;
        }

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("The entered value is invalid....\n");
            break;
    }
    return 0;
}
