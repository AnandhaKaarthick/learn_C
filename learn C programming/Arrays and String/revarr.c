#include <stdio.h>

int main(){
    int n;
    printf("Enter the number fi element: \n");
    scanf("%d", &n);


    int temp, a[n], i;

    printf("Enter the integer: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    

    for(i = 0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    printf("\nReversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}