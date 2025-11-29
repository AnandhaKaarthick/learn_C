#include<stdio.h>

int getnum();

int main(){
    int num;
    num = getnum();
    printf("The Entered number is: %d", num);
    return 0;
}

int getnum(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}