#include<stdio.h>

int main(){
    int i, j;
    int length;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);

    for(i = 0; str[i] != '\0'; i++){
        length ++;
    }

    for(i = 0, j = length-1; i<j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("the reversed string is: %s\n", str);

    printf("The string is reversed...");
    return 0;
}