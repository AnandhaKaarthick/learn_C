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

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student stu[n];

    for(i = 0; i<n; i++){
        printf("Enter the student name: ");
        scanf("%s", &stu[i].name);

        printf("Enter the branch: ");
        scanf("%s", &stu[i].branch);

        printf("Enter the rollno: ");
        scanf("%d", &stu[i].rollno);

        printf("Enter the year: ");
        scanf("%d", &stu[i].year);
    }

    for(i = 0; i<n; i++){
        printf("The detail of the student%d\n", i+1);
        printf("%s\n", stu[i].name);
        printf("%s\n", stu[i].branch);
        printf("%d\n", stu[i].rollno);
        printf("%d\n", stu[i].year);
    }

    return 0;
    

}