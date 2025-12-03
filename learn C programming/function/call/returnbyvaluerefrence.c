#include<stdio.h>

int calculateSquare(int num){
    return num*num;
}

void applyDiscount(float *price){
    *price = *price * 0.9;
}

int main(){
    int number = 5;
    float productPrice = 100.0;
    
    printf("=== BEFORE ===\n");
    printf("Number: %d\n", number);
    printf("Product Price: $%.2f\n", productPrice);
    
    printf("\n=== USING FUNCTIONS ===\n");
    
    int squared = calculateSquare(number);
    printf("Square of %d is %d\n", number, squared);
    printf("Number is still: %d (unchanged!)\n", number);
    
    applyDiscount(&productPrice);
    printf("After 10%% discount: $%.2f\n", productPrice);
    printf("Product price is now: $%.2f (changed!)\n", productPrice);
    
    printf("\n=== FINAL VALUES ===\n");
    printf("Number: %d (Call by Value - protected)\n", number);
    printf("Product Price: $%.2f (Call by Reference - modified)\n", productPrice);
    
    return 0;
}