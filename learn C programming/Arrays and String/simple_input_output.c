#include<stdio.h>

int main(){
    int n;
 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
 
    int arr[n];
    
    for(int i= 0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("The entered elements are: \n");
    
    for(int i= 0; i<n; i++){
        printf("%d ", arr[i]);
    }

    int sum = 0;
    for (int i = 0; i<n; i++){
        sum+= arr[i];
    }
    printf("The sum of the array elements are: %d\n", sum);
    
    int avg = sum/n;
    printf("The calculation of the average is started......\n");
    printf("The average of the given elements is: %d", avg);

}