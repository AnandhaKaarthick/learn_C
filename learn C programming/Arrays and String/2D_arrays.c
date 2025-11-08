#include<stdio.h>
#include<stdlib.h>

void display(int matrix[3][3]){
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add(int a[3][3], int b[3][3], int sum[3][3]){
        for (int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
}

void sub(int a[3][3], int b[3][3], int sum[3][3]){
        for (int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                sum[i][j] = a[i][j] - b[i][j];
            }
        }
}

void mul(int a[3][3], int b[3][3], int sum[3][3]){
        for (int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                sum[i][j] = a[i][j] * b[i][j];
            }
        }
}

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
    
    display(b);
    

    printf("\nThe entered Matrix 2 is:\n");
    display(a);


    printf("enter the option: \n");
    printf("1.Add\n2.Sub\n3.mul");
    scanf("%d", &option);
    switch(option){
        case 1:
            add(a,b,c);
            printf("\nThe addition of matrix:\n");
            display(c);
            break;

        case 2:
            sub(a, b, c);
            printf("\nThe Subracion of matrix:\n");
            display(c);
            break;

        case 3:
            mul(a, b, c);
            printf("\nThe multiplication of matrix: ");
            display(c);
            break;

        default:
            printf("Invalid Input!\n");
            break;
    }

    return 0;

}


