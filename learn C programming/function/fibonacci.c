#include<stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int a = 0;
    int b = 1;
    int c ;

    for(int i = 2; i<n; ++i){
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n;
    printf("Enter the number of times the series needed: ");
    scanf("%d", n);
    for(int i = 0; i<n; i++){
        printf("F(%d) = %d\n", i, fibonacci(i));
    }
    return 0;
}