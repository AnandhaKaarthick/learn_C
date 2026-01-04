#include<stdio.h>
#include<conio.h>

int sort(int*, int);
int main(){
    int a[20], i, n, *x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        printf("Enter the element%d: ", i+1);
        scanf("%d", &a[i]);
    }
    x = a;
    sort(x,n);
    printf("The sorted arrays are...\n");
    for(i = 0; i<n; i++){
        printf("%d", a[i]);
    }
    getch();
    return 0;
}

int sort(int*x, int n){
    int i, j, t;
    for(i = 0; i<n-1; i++){
        for(j = 0; j<n-i-1; j++){
            if(*(x+j) > *(x+(j+1))){
                t = *(x+j);
                *(x+j) = *(x+(j+1));
                *(x+(j+1)) = t;
            }
        }
    }
}