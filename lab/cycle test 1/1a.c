#include<stdio.h>

int main(){
    int num;
    float fnum;
    char ch;
    char str[100];

    printf("Enter a Character: ");
    ch = getchar();
    getchar();

    printf("Enter a String: ");
    gets(str);

    printf("Enter a integer: ");
    scanf("%d", &num);

    printf("Enter a Float: ");
    scanf("%f", &fnum);

    printf("The character u have entered is: ");
    putchar(ch);
    printf("\n");

    printf("The string u have entered is: ");
    puts(str);
    printf("\n");

    printf("The integer u have entered is: %d \n", num);

    printf("The float u have entered is: %f \n", fnum);

    return 0;
}