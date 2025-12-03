// program to swap two number 

#include<stdio.h>

void swapValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swapRefrence(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int c = 1, int d = 2;
    int e = 10, int f = 20;

    swapValue(c, d);
    swapRefrence(&e, &f);

    printf("The value of c and d after the value swap: %d, %d\n", c,d);
    printf("The value of e and f after the refrence swap is: %d, %d\n", e, f);

    return 0;
}
