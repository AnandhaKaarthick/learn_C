#include<stdio.h>

int main(){
    int n, ser, index, c = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("enter the element to be searched: ");
    scanf("%d", &ser);

    for(int i=0; i<n; i++){
        if(a[i] == ser){
            index = i;
            c+=1;
        }
    }

    if(c==0){
        printf("The entered element is not in the array: ");
    }

    printf("The searched element is in index: %d", index);

    return 0;
}