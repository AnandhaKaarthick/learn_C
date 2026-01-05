#include<stdio.h>

struct employee{
    int eid;
    char name[20];
    char dept[20];
    char des[20];
    int salary;
};

void payslip(struct employee*e, int n){
    int id, i;
    printf("Enter the employee id: ");
    scanf("%d", &id);

    for(i = 0; i<n; i++){
        if((e+i)->eid == id){
            printf("eid\t\tname\t\tdept\t\tdes\t\tsalary\n");
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\n", 
                (e+i)->eid, (e+i)->name, (e+i)->dept, (e+i)->des, (e+i)->salary);
            printf("\n");
            return;
        }
    }
    printf("Invalid eid");
}

int main(){
    struct employee emp[20];
    int m, i;
    printf("Enter the number of persons: ");
    scanf("%d", &m);

    printf("eid, name, dept, des, salary\n");
    for(i = 0; i<m; i++){
        scanf("%d %s %s %s %d", &emp[i].eid, emp[i].name, emp[i].dept, emp[i].des, &emp[i].salary);
    }

    payslip(emp, m);
    return 0;
}