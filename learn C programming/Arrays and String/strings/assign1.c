#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];

    printf("Enter a string below the length of 50:");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("The length of the entered string is: %d", strlen(str1));

    return 0;
}