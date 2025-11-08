#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j, option;
    printf("Enter the values for 1: \n");
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the values for 2: \n");
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe entered Matrix 1 is:\n");
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;

    printf("\nThe entered Matrix 2 is:\n");
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;

    printf("enter the option: \n");
    printf("1. Add\n2.Sub\n3.mul");
    void add();
    switch(option){
        case 1:
            
    }

}