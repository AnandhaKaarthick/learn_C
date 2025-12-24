#include <stdio.h>
void main(){
    int i;
    printf("Alphabets from (A-Z) are:\n");
    for (i = 65; i<= 90; i++){
        printf("%c \t",i);
    }

    printf("\n Alphabets from (a-z) are:\n");
    for (i = 97; i<= 122; i++) {
        printf("%c \t",i);
    }
}
