#include<stdio.h>

int addnum(int a, int b){
    int result = a+b;
    printf("Inside function: %d + %d = %d\n", a, b, result);
    return result;
}

int main(){
    int x = 5, y = 3;
    printf("Before function call: \n");
    printf("x = %d, y = %d\n", x, y);

    int sum = addnum(x,y);

    printf("After function call: \n");
    printf("The sum = %d", sum);

    return 0;
}