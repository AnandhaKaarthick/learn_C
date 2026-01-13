#include<stdio.h>

void cntdwn(int n){
    if(n <= 0){
        printf("blast off!!!\n  ");
        return;
    }
    printf("%d\n", n);
    cntdwn(n-1);
}

int main(){
    int n;
    printf("Enter the no of times to countdown: ");
    scanf("%d", &n);
    cntdwn(n);
    return 0;
}