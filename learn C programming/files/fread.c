#include<stdio.h>

int main(){
    char name[50];
    FILE *fp;
    fp = fopen("sam.txt", "r");

    if(fp == NULL){
        printf("file cannot be opened...");
        return 1;
    }
    fscanf(fp, "%s", name);

    printf("The content in the file is: %s", name);

    return 0;

}