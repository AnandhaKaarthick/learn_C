//program to print your name 

#include <stdio.h>
void main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your name is %s", name);
}