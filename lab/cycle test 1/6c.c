#include<stdio.h>

int sum(int a[], int n){
    int i, sum = 0;
    for(i = 0; i<n; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int n, i, a[10], result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter the element%d: ", i+1);
        scanf("%d", &a[i]);
    }
    result = sum(a,n);
    printf("The sum of the array elements are: %d", result);
    return 0;
}