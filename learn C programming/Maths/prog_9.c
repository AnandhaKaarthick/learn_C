//program to check wether it is positive or negative number

#include<stdio.h>
int main(){

    int a;
    printf("enter the number to be checked:");
    scanf("%d", &a);
    
    if (a>0){
        printf("the entered number is positive");
    }else if(a<0){
        printf("The entered number is negative");
    }else{
        printf("You entered zero");
    }

    return 0;
}