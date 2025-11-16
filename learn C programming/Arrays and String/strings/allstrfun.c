#include<stdio.h>
#include<string.h>

int main(){
    char str1[20], str2[20], str3[20];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter the sample string: ");
    gets(str2);

    printf("string length is: %d\n", strlen(str1));
    printf("string copy is: %s\n", strcpy(str3, str2));
    printf("The comparison of the string is: %d\n", strcmp(str1, str2));
    printf("The uppered string is: %s and lowered string is:  %s\n", strlwr(str1), strupr(str1));
    printf("The duplication of the string 1 is: %s\n", strdup(str1));
    printf("The concatination of the string is: %s\n", strcat(str1, str2));
    printf("The reverse of string 1 is: %s\n", strrev(str1));

    return 0;
}

