#include<stdio.h>

int isprime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2 ; i<= n/2; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);

    if(isprime(n)){
        printf("The entered number is prime....");
    }
    else{
        printf("The entered number is not a prime number....");
    }
    return 0;
}