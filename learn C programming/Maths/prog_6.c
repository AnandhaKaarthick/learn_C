#include <stdio.h>

int main(){

    float avg;
    int s1, s2, s3, s4, s5, sum;

    printf("Enter the mark of five subject: ");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    sum = s1+s2+s3+s4+s5;
    printf("The total mark: %d\n", sum);
    avg = sum/5;
    printf("%f ", avg);

    return 0;
}