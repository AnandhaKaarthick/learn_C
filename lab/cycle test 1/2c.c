//creating a menu driven calculator

#include<stdio.h>
#include<conio.h>
int main(){
    int option, a, b, c;
    

    printf("Enter the option: ");
    printf("\n1. add\n2. subtract\n3. Multiplication\n4. Division\n");
    scanf("%d", &option);

    switch(option){
        case 1:
            printf("Enter the 2 values: ");
            scanf("%d %d", &a, &b);
            c = a+b;
            break;

        case 2:
            printf("Enter the 2 values: ");
            scanf("%d %d", &a, &b);
            c = a-b;
            break;

        case 3:
            printf("Enter the 2 values: ");
            scanf("%d %d", &a, &b);
            c = a*b;
            break;

        case 4:
            printf("Enter the 2 values: ");
            scanf("%d %d", &a, &b);
            c = a/b;
            break;

        default:
            printf("The entered value is incorrect");
            return 0;
    }

    printf("The result is: %d", c);
    getch();
    return 0;

}