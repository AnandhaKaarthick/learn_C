/*
 * PROGRAM: Basic String Operations
 * DESCRIPTION: Demonstrates essential string functions - strlen, strcpy, strcat
 * USES: strlen(), strcpy(), strcat()
 */ 

 #include <stdio.h>
 #include<string.h>

 int main(){
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    strcpy(str3, str1);
    printf("The str3 after copying function is: %s\n", str3);

    int len = strlen(str3);
    printf("The %s has a length of: %d\n", str3, len);

    printf("The concatination of %s and %s is: %s", str1, str2, strcat(str1, str2));

    printf("\n%s", str1);

 }