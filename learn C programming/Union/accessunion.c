#include<stdio.h>
#include<string.h>

union data{
    int i;
    float f;
    char ch[10];
};

int main(){
    union data dat;

    dat.i = 10;
    dat.f = 1.00;
    strcpy(dat.ch, "anandha");

    printf("%d - %.2f - %s", dat.i, dat.f, dat.ch);

    return 0;

}