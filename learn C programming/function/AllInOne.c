#include<stdio.h>
#include<string.h>

void display_welcome(){
    printf("Wecome To Our New Session Of C\n");
    printf("Welcome to our The World of C Programming\n");
}

float get_pi_value(){
    return 3.14;
}

void stu_details(char name[100], int rollno, int mark ){
    printf("The Detail of the Student are as follows...")
    printf("The name Of the student is: %s\n", name);
    printf("The rollno of the student is: %d\n", rollno);
    printf("The marks of the student is: %d\n", mark);
}

int multiplication(int a, int b){
    return a*b;
}

int main(){
    char name = "Anandha Kaarthick";
    int rollno = 2117250080005;
    int mark = 80;
    printf("The first Type is Function Without Argument and Without Return value\n");
    display_welcome()

    printf("The second Type is Function Without Argument and with Return Value\n");
    int c = get_pi_value()
    printf("The value Of pi is: %d\n", c);
    
    printf("The Third Type is Function With Argument and without Return Value\n");
    stu_details(name, rollno, mark);

    printf("The forth Type is Function With Argument and with Return Value\n");
    int a = 2;
    int b = 4;
    int c = multiplication(a, b);
    printf("The multiplication of two values are: %d");

    return 0;

}