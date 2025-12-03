//Function to add 10 to the given number

#include<stdio.h>
int add(int n){
    n = n+10;
    return n;
}

int main(){
    int a = 5;
    int result = add(a);

    printf("The original value is: %d\n", a);
    printf("The number after function is: %d\n", result);

    return 0;

}