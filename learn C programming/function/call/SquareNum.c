// program to calculate the square of a number 

#include<stdio.h>

int square(int num){
    int *square = (*num)*(*num);
}

int main(){
    int a = 5;
    square(&a);
    printf("The square of the number is: %d", a);

    return 0;
}