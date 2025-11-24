#include<stdio.h>

int main(){
    int n;
    int k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the no of positions moved: ");
    scanf("%d", &k);
    for(int i = 0; i<n; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &arr[i]);
    }
    int temp[n];

    for(int i = 0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }

    printf("The rotated array is: \n");
    for(int i = 0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;

}