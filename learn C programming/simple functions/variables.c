#include <stdio.h>
#include <stdbool.h>

int main(){
    /*int age = 18;
    int year = 2025;
    int quantity = 1;
    float gpa = 2.5;
    float price = 19.99;
    float temperature  = -10.1;
    double pi = 3.14153456789;
    printf("you are %d years old \n", age);
    printf("The year is %d\n", year);
    printf("your gpa is %.1f\n", gpa);
    printf("the price is %.2f\n", price);
    printf("You have ordered %d items\n", quantity);
    printf("the temperature is %.2f\n", temperature);
    printf("the value of pi is %.15f\n", pi);
    */

    /*char grade = 'A';
    char symbol = '!';
    char name[] = "Anandha";
    char food[] = "Pizza";
    printf("your grade is %c\n", grade);
    printf("your favorite symbol is %c\n", symbol);
    printf("your name is %s\n", name);
    printf("Your favorite food is %s\n", food);*/

    bool isonline = false;
    bool isstudent = false;
    if(isonline){
        printf("You are online");
    }
    else{
        printf("You are offline\n");
        if(isstudent){
            printf("its good to be offline");
        }
        else{
            printf("go online");
            printf("\nyou are not a student ");
        }
    }

    return 0;
}