#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct student{
    char name[100];
    char branch[4];
    struct date dob;
    int year;
};

int main(){
    int i, n;

    printf("Enter the number of student: ");
    scanf("%d", &n);

    struct student stu[n];
    for(i = 0; i<n; i++){    
        printf("Enter the name: ");
        scanf("%s", &stu[i].name);
        printf("Enter the branch: ");
        scanf("%s", &stu[i].branch);
        printf("Enter the date of birth: ");
        scanf("%d %d %d", &stu[i].dob.day, &stu[i].dob.month, &stu[i].dob.year);
        printf("Enter the year: ");
        scanf("%d", &stu[i].year);
    }

    for(i = 0; i<n; i++){
        printf("name: %s\n", stu[i].name);
        printf("branch: %s\n", stu[i].branch);
        printf("date of birth: %d-%d-%d\n", stu[i].dob.day, stu[i].dob.month, stu[i].dob.year);
        printf("year: %d\n", stu[i].year);
    }
    
    return 0;
    
    
}