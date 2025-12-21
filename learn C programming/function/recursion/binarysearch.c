#include<stdio.h>

int ser(int arr[], int low, int high, int key){
    if(low> high){
        return -1;
    }

    int mid = low + (high-low)/2;
    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid]>key){
        return ser(arr, low, mid-1, key);
    }
    else{
        return ser(arr, mid + 1, high, key);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key, result;

    printf("Enter the number to be searched: ");
    scanf("%d", &n);

    result = ser(arr, 0, n-1, key);

    if(result == -ṇ1){
        printf("the element not found");
    }

    else{
        printf("The element found in position of: %d", result);
    }

    return 0;
}