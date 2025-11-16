#include<stdio.h>

int main(){
    int min_index, n, i, j, temp;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++){
        min_index = i;
        for(j=i+1; j<n; j++){
            if(a[min_index]>a[j]){
                min_index = j;
            }
        }
        if(min_index != i){
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }

    printf("the sorted array is\n: ");
    for(i=0; i<n; i++){
        printf("%d", a[i]);
    }
    return 0;
}