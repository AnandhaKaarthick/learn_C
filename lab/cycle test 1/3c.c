#include<stdio.h> 

int main() {
int n;
int sum = 0;

printf("Enterthenumber:"); 
scanf("%d", &n);

for (int i = 1; i <= n; i++)
    sum += i * i * i;
    printf("Sum=%d\n",sum);
}

return 0;
