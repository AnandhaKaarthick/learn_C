#include <stdio.h>
#include <math.h>

void TOH(int n, char Beg, char Aux, char End){
    if (n == 0)
        return;

    TOH(n - 1, Beg, End, Aux);

    printf("Move disk %d from %c to %c\n", n, Beg, End);

    TOH(n - 1, Aux, Beg, End);
}

int main()
{
    int n;
    long moves;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    moves = pow(2, n) - 1;
    printf("Total number of moves = %ld\n\n", moves);

    TOH(n, 'A', 'B', 'C');

    return 0;
}
