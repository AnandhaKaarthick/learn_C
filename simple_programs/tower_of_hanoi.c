#include <stdio.h>
#include <math.h>

/* Function to solve Tower of Hanoi */
void TOH(int n, char Beg, char Aux, char End)
{
    if (n == 0)
        return;

    /* Move n-1 disks from Beg to Aux using End */
    TOH(n - 1, Beg, End, Aux);

    /* Move the nth disk from Beg to End */
    printf("Move disk %d from %c to %c\n", n, Beg, End);

    /* Move n-1 disks from Aux to End using Beg */
    TOH(n - 1, Aux, Beg, End);
}

int main()
{
    int n;
    long moves;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    /* Total number of moves */
    moves = pow(2, n) - 1;
    printf("Total number of moves = %ld\n\n", moves);

    /* Function call */
    TOH(n, 'A', 'B', 'C');

    return 0;
}
