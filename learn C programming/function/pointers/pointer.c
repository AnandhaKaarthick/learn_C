#include<stdio.h>

int main(){
    int x, *p;
    x = 10;
    p = &x;

    printf("The x = %d\n", x);
    printf("The adress of x = %p\n", (void*)&x);
    printf("the adress stored in p = %p\n", (void*)p);
    printf("The value stored in p is %d\n", *p);

    return 0;
}