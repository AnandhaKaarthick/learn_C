#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[100];
    char branch[100];
    int rollno;
    int year;
};

int main(){
    int i, n;
    struct student stu;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        printf("Enter the student name: ");
        scanf("%s", &stu.name);

        printf("Enter the branch: ");
        scanf("%s", &stu.branch);

        printf("Enter the rollno: ");
        scanf("%d", &stu.rollno);

        printf("Enter the year: ");
        scanf("%d", &stu.year);

        printf("The detail of the student%d\n", i+1);
        printf("%s\n", stu.name);
        printf("%s\n", stu.branch);
        printf("%d\n", stu.rollno);
        printf("%d\n", stu.year);
    }

    return 0;
    

}