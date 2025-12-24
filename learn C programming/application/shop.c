#include <stdio.h>
#include <string.h>

int main(){
    char item[50]="";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what would u like to buy:");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    
    printf("what is the price of each item");
    scanf("%f", &price);

    printf("how many would buy:");
    scanf("%d", &quantity);

    total = price*quantity;

    printf("you have bought a %s", item);
    printf("The price is %.2f", total);

    return 0;

}