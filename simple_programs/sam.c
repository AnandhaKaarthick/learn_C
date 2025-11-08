#include<stdio.h>
int main(){
    int choice;
    printf("choose one number from(1,2): ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("u chose 1");
            break;

        case 2:
            printf("u chose 2");
            break;
        default:
            printf("Invalid Choice");
            break;
    }
    return 0;
}