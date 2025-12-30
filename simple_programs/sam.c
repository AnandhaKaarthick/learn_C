// #include<stdio.h>
// int main(){
//     int a[2][3] = {{1,2,3}, {1,3,3}};
//     for (int i=0; i<2; i++){
//         for (int j=0; j<3; j++){
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//fibonacci series

// #include<stdio.h>

// int fibonacci(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }

//     return fibonacci(n-1)+fibonacci(n-2);
// }

// int main(){
//     int i, n;
//     printf("Enter the number of series: ");
//     scanf("%d", &n);
//     for(i = 0; i<n; i++){
//         printf("F(%d) = %d\n", i, fibonacci(i));
//     }
   
// }

#include<stdio.h>

int fact(int n){
    if(n == 1|| n == 0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n, result;
    printf("Enter the number to find the factorial: ");
    scanf("%d", &n);
    result = fact(n);
    printf("The factorial of the number is: %d", result);
    return 0;
}