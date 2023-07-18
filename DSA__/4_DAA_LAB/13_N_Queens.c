#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define false 0
#define true 1

int x[20];

int place(int k, int i)
{
    int j;
    for (j = 1; j <= k; j++)
    {
        if ((x[i] == j) || ((abs(x[j] - i)) == abs(j - k)))
            return false;
    }
    return true;
}

void nqueens(int k, int n)
{
    int i, a;
    for (i = 1; i <= n; i++)
    {
        if (place(k, i))
        {
            x[k] = i;
            if (k == n)
            {
                for (a = 1; a <= n; a++)
                {
                    printf("%d", x[a]);
                }
                printf("\n");
            }
        }
        else
        {
            nqueens(k + 1, n);
        }
    }
}

void main()
{
    int n;
    printf("Enter the numbers of queens");
    scanf("%d", &n);
    printf("\nThe solution to nqueens problem is : \n");
    nqueens(1, n);
}