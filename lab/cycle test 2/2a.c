//Write a program to reverse a string without using strrev() or library functions.

#include<stdio.h>

int main(){
    int length = 0;
    int i, j;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", &str);

    for(i = 0; str[i] != '\0'; i++){
        length ++;
    }

    for(i = 0, j = length-1; i<j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("The reversed string is: %s", str);
    return 0;
}