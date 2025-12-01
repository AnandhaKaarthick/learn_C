//Write a program to read 10 numbers and find how many are even and odd using arrays

#include<stdio.h>

int main(){
    int a[10], i;
    int ocount = 0;
    int ecount = 0;
    for(i=0; i<10; i++){
        printf("Enter the integer element %d: \n", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<10; i++){
        if(a[i]%2 == 0){
            ocount+=1;
        }else{
            ecount+=1;
        }
    }
    printf("The odd number count are: %d\n", ocount);
    printf("The even number count are: %d\n", ecount);
    return 0;

}