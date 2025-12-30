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
    struct student *ptr;

    ptr = &stu;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        printf("Enter the student name: ");
        scanf("%s", &ptr->name);

        printf("Enter the branch: ");
        scanf("%s", &ptr->branch);

        printf("Enter the rollno: ");
        scanf("%d", &ptr->rollno);

        printf("Enter the year: ");
        scanf("%d", &ptr->year);

        printf("The detail of the student%d\n", i+1);
        printf("%s\n", ptr->name);
        printf("%s\n", ptr->branch);
        printf("%d\n", ptr->rollno);
        printf("%d\n", ptr->year);
    }

    return 0;
    

}