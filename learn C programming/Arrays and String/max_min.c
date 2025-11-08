#include<stdio.h>

int main(){
    int n;

    printf("Enter the number elements: \n");
    scanf("%d", &n);

    int a[n], i;

    printf("enter the elements: ");
    for(i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int min, max;
    min = max = a[0];
    
    for(i=0; i<n; i++){
        if(a[0]<a[i]){
            max = a[i];
        }
        if(a[0]>a[i]){
            min = a[i];
        }
    }

    printf("The Minimum and Maximum from the given element is: \n");
    printf("The maximum is: %d \n", max);
    printf("The minimum is: %d \n", min);

    return 0;

}