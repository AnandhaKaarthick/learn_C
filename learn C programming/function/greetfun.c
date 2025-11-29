#include<stdio.h>
#include<string.h>

void greet(char name[]);

int main(){
    char name[50] = "";
    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    greet(name);
    return 0;
}

void greet(char name[]){
    printf("Hello! %s....\n", name);
    printf("Welcome to C programming ....");
}