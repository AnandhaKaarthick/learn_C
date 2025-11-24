#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];

    printf("Enter a string below the length of 50:");
    gets(str1);
    printf("The length of the entered string is: %d", strlen(str1));

    return 0;
}