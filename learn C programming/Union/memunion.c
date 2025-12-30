#include<stdio.h>

union data{
    int i;
    float f;
    char ch[20];
};

int main(){
    union data dat;

    printf("total memory allocated: %lu bytes", sizeof(dat));
    printf("the size of int: %lu", sizeof(int));
    printf("the size of float: %lu", sizeof(float));
    printf("the size of character: %lu", sizeof(char[20]));

    return 0;
}