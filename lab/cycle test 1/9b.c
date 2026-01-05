#include<stdio.h> 

struct Student {
    char name[20];
    int marks[3][5];      // 3 internal tests × 5 subjects
    float internalMarks[5];  // Added to store calculated marks
};

void calculateInternal(struct Student s) { 
    int j, k, total;
    
    for(j = 0; j < 5; j++) { 
        total = 0;
        for(k = 0; k < 3; k++) { 
            total += s.marks[k][j];  // Sum of 3 tests for each subject
        }
        s.internalMarks[j] = (total / 3.0) * 0.2;  // Average × 20%
    }
    
    printf("\nInternal Marks (out of 20):\n");
    for (j = 0; j < 5; j++) {
        printf("Subject %d: %.2f\n", j + 1, s.internalMarks[j]);
    }
}

int main() {
    struct Student s; 
    int j, k;
    
    printf("Enter student name: ");
    scanf("%s", s.name);
    
    // Input marks for 3 internal tests across 5 subjects
    for (j = 0; j < 3; j++) {
        printf("\nEnter internal test %d marks for five subjects:\n", j+1); 
        for (k = 0; k < 5; k++) {
            printf("Subject %d: ", k+1);
            scanf("%d", &s.marks[j][k]);
        }
    }
    
    calculateInternal(s);
    return 0;
}