//finding the leap year

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("The entered year is leap year");
    } else {
        printf("The entered year is not a leap year");
    }

    return 0;
}