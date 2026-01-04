#include<stdio.h>
int swap(int, int);
int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x,&y);

    printf("\nBefore swapping: \nx = %d\ny = %d\n", x,y);
    swap(x,y);
    printf("\nAfter swapping: \nx = %d\ny = %d", x,y);
    return 0;
}

int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Values of a and b are = %d and %d", a, b);
}