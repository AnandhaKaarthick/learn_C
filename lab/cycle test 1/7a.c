#include<stdio.h>

void TOH(int n, char beg, char aux, char end){
    if(n == 0){
        return;
    }

    TOH(n-1, beg, end, aux);
    printf("The disk %d moves from %c - %c: \n", n, beg, end);
    TOH(n-1, aux, beg, end);
}

int main(){
    int n;
    printf("Ente the number of disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C');
    return 0;
}