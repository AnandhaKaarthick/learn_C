//Write a program to display elements of an array that are divisible by both 3 and 5.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    int a[n];
    int count = 0;

    for(int i = 0; i<n; i++){
        printf("Enter the element%d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("The elements divisibe \n");

    for(int i = 0; i<n; i++){
        if(a[i]%3 == 0 && a[i]%5 == 0){
            printf("%d ", a[i]);
            count ++;
        }
    }

    printf("\nThe number of elements divisible are: %d", count);

    return 0;
}