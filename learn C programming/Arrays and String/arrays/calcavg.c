#include<stdio.h>
void main(){
    int m[5], sum=0, i, n;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &m[i]);
    }

    for(i=0; i<n; i++){
        sum += m[i];
    }

    avg = (float)sum/n;
    printf("average = %.2f", avg);
}
