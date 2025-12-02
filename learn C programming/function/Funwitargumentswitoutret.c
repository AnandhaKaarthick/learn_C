//Function WITH arguments but without return

#include<stdio.h>

int table();

int main(){
    int num ;
    printf("Enter the number to print table: \n");
    scanf("%d", &num);
    table(num);
    return 0;
}

int table(int number){
    printf("The %d table is\n", number);
    for(int i = 0; i<11; i++){
        printf("%d x %d = %d\n", number, i+1, number*(i+1));
    }
}