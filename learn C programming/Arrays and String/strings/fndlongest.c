#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j;
    printf("Enter the no of elements in array: ");
    scanf("%d", &n);
    getchar();

    char str[n][100];

    for(i=0; i<n; i++){
        printf("Enter the string: ");
        gets(str[i]);
    }

    char longstr[100];
    strcpy(longstr, str[0]);
    for(i=1; i<n; i++){
        if(strlen(str[i]) > strlen(longstr)){
            strcpy(longstr, str[i]);
        }
    }
    printf("The longest element in the string is: %s", longstr);
}