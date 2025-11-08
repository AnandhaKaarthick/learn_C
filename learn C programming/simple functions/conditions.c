#include<stdio.h>

int main() {

    int age = 12;

    if(age >= 18){
        printf("You are an adult: ");
    }else if(age<0){
        printf("you are not born");
    }else if(age>65){
        printf("you are a seniorcitizen");
    }else if(age<18){
    printf("u are under age");
    }
}