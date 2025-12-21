#include<stdio.h>

int main(){
    char a[] = "hello";
    char *p = a;
    int len = 0; 

    printf("String: %s\n", p);

    while(*p != '\0'){
        printf("%c", *p);
        p++;
    }

    p = a;
    while(*p != '\0'){
        len++;
        p++;
    }
    printf("\n");
    printf("The length of the string is: %d", len);
}