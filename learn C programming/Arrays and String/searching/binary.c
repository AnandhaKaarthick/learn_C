#include<stdio.h>

int main(){
    int n, low, mid, high;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("the sorted arr is");
    for(int i = 0; i<n; i++){
        printf("%d", a[i]);
    }

    for
}