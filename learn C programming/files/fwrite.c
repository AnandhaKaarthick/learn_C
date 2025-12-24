#include<stdio.h>

int main(){
    FILE *fp;

    fp = fopen("sam.txt", "w");

    if(fp == NULL){
        printf("File cannot be opened..");
        return 1;
    }

    fprintf(fp, "Anandha");
    fclose(fp);

    return 0;

}