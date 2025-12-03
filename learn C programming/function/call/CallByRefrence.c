//Function to add 10 to the given number

#include<stdio.h>

int add(int *n){
    *n = *n + 10;
    return *n;
}

int main(){
    int a = 5;
    int *r = add(&a);

    printf("The original value after function call: %d\n", a);
    printf("The value after fuction call using pointers: %d", r);

    return 0;
}