//Change value through pointer

#include<stdio.h>

int main(){
    int x,*p;
    x = 10;
    p = &x;

    printf("the value before p = %d\n", *p);

    *p = 20;

    printf("The value after p = %d", *p);
    return 0;
}