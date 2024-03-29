#include <stdio.h>
#include <stdlib.h>

//#define M (1 << 15)
#define M (1 << 14)
#define N M

int a[M][N];

int sumarrayrows(int a[M][N])
{
    int i, j, sum = 0;

    for (j = 0; j < N; j++)
        for (i = 0; i < M; i++)
            sum += a[i][j];

    return sum;
}

int main()
{
    int i, j;

    for (j = 0; j < N; j++)
        for (i = 0; i < M; i++)
            a[i][j] = ((j % 2 == 0) ? 1 : -1);

    printf("sum=%d\n", sumarrayrows(a));
    exit(0);
}
