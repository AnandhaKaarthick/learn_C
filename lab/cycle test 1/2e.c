// print 1 o n numbers except mutiples of 5

#include<stdio.h>

int main(){
    int n, i;
    printf("enter the positive integer N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if (i%5 != 0){
            printf("%d\n", i);
        }
    }
}