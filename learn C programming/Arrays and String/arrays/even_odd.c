#include<stdio.h>

int main(){
    int n;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int a[n], i;
    printf("Enter the element: \n");
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int even=0, odd = 0;
    for(i = 0; i<n; i++){
        if(a[i] %2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    printf("The number of odd numbers: %d\n", odd);
    printf("The number of even numbers: %d\n", even);
    return 0;
}