//A store owner has daily sales numbers in random order and wants them arranged neatly from smallest to largest for analysis.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of sales numbers: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        printf("Enter the sales number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int minind;
    for(int i = 0; i<n-1; i++){
        minind = i;
        for(int j = i+1; j<n; j++){
            if(a[minind]>a[j]){
                minind = j;
            }
        }
        if(minind != i){
            int temp = a[i];
            a[i] = a[minind];
            a[minind] = temp;
        }
    }
    printf("The sorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
    return 0;
}