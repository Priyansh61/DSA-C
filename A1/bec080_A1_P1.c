#include <stdio.h>
int main()
{
    int n, m, k = 0;
    scanf("%d %d", &n, &m);
    int a[n][m], c[n + m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        c[k] = a[i][0];
        for (int j = 0; j < m; j++)
        {
            if (c[k] < a[i][j])
                c[k] = a[i][j];
        }
        k++;
    }
    for (int i = 0; i < m; i++)
    {
        c[k] = a[0][i];
        for (int j = 0; j < n; j++)
        {
            if (c[k] < a[j][i])
                c[k] = a[j][i];
        }
        k++;
    }
    k--;

    for (int i = 0; i < n; i++)
    {
        printf("Maximum of row %d is = %d\n", (i + 1), c[i]);
    }
    for (int i = n; i < (n + m); i++)
    {
        printf("Maximum of coloumn %d is = %d\n", (i - n + 1), c[i]);
    }

    return 0;
}