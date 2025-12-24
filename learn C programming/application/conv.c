#include<stdio.h>

int main(){
    int choice = 0;
    int pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight conversion calculator\n");
    printf("1. Kilograms to pounds\n");
    printf("2. pounds to kilograma\n");
    printf("Enter your choice(1 or 2)");
    scanf("%d", &choice);

    if(choice==1){
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms*2.20463;
        printf("the pounds value is: %d", pounds);

    }
    else if(choice == 2){
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds/2.20463;
        printf("the kilograms value is: %d", kilograms);
    }
    else{
        printf("Your Entry Is invalid");
    }
}