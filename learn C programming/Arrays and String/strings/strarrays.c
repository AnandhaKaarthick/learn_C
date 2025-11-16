#include <stdio.h>
#include <string.h>

void main(){
    char str[2][20];
    for (int i=0; i<2; i++){
        printf("Enter the string: ");
        scanf("%s", &str);
    }

    printf("the string array is:");
    for (int i=0; i<2; i++){
        printf("%s", str[i]);
    }
}