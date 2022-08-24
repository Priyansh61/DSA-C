#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, m, n1, m2;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &n1, &m2);
    int b[n1][m2];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int ans[n][m2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    if (m == n1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Cannot multiply the matrices.");
    }

    return 0;
}