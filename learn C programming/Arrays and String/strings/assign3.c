#include<stdio.h>
#include<string.h>

int main(){
    char str1[50];
    char str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str1, "\n")] = '\0';

    int result = strcmp(str1, str2);

    if(result == 0){
        printf("The entered strings are equal !!");
    }else{
        printf("The entered string are not equal !!");
    }

    return 0;
    
}