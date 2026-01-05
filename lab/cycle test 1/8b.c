#include<stdio.h>

int main(){
    char *names[5] = {"zara ali", "hina ali", "nuha ali", "sara ali", "sameer ali"};
    int i;
    for(i = 0; i<5; i++){
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
    return 0;
}