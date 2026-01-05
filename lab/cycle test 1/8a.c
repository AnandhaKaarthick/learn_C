#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    int pp;

    p = &a;
    pp = &p;

    printf("The adress of a: %p\n", (void*)&a);
    printf("The adress of p: %p\n", (void*)p);
    printf("The value stored in p: %d\n", *p);
    printf("The value stored in pp: %d\n", pp);

    return 0;
}