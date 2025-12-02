#include<stdio.h>

int main(){
    int a[12];
    int b[12];
    int sum[12];
    int i;
    
    printf("======Enter the expense for 1 company======\n");
    for(i = 0; i<12; i++){
        printf("The Expense in month %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("=======Enter the expense for 2 company=======\n");
    for(i = 0; i<12; i++){
        printf("The Expense in month %d: ", i+1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i<12; i++){
        sum[i] = a[i]+b[i];
    }
    printf("The overall expense of the company is: \n");
    for(i = 0; i<12; i++){
        printf("The expense in month %d is %d \n", i+1, sum[i]);
    }
    return 0;
}