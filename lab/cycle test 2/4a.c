//Write a program to count how many times a particular number appears in an array

#include<stdio.h>

int main(){
    int n;
    int count = 0;
    int index;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        printf("Enter the element%d: ", i+1);
        scanf("%d", &a[i]);
    }
    int key;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for(int i = 0; i<n; i++){
        if(a[i] == key){
            index = i;
            count ++;
        }
    }
    printf("The index value of the numbers are: %d\n", index);
    printf("The number of occurence the searched number is : %d\n", count);
    return 0;
}