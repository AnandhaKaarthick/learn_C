#include<stdio.h>
long factorial(int n){
    long fact=1,i;
    for(i=1;i<=n;i++){
        fact*=i;
    } 
    return fact;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("%d! = %ld\n",n,factorial(n));
    return 0;
}