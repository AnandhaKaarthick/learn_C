//Linear Search

#include<stdio.h>

int main(){
    int i, j, n, key, found, arr[100] ;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for(i = 0; i<n; i++){
        if(arr[i] == key){
            found = i;
        }
    }
    if(found != -1){
        printf("The element %d found at index of: %d", key, found);
    }else{
        printf("The entered element is not found...");
    }

}