#include <stdio.h>
 #include<string.h>

 int main(){
    char str1[50], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;
    
    

    printf("The concatination of two elements are: %s ", strcat(str1, str2));

    return 0;
 }