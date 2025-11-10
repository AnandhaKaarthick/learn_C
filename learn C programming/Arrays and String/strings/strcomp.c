/*
 * PROGRAM: String Comparison
 * DESCRIPTION: Compares two strings and shows which comes first alphabetically
 * USES: strcmp(), fgets(), string comparison logic
 */

#include<stdio.h>
#include<string.h>

int main(){
    char str1[20];
    char str2[20];

    printf("Enter the first string: \n");
    fgets(str1, 20, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Enter the second string: \n");
    fgets(str2, 20, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    int result = strcmp(str1, str2);

    if (result == 0){
        printf("strings are equal !! \n");
    }else if(result < 0){
        printf("%s comes before %s\n", str1, str2);
    }else{
        printf("%s comes before %s\n", str2, str1);
    }

}