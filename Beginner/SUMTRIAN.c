#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i][j] < a[i][j + 1])
                {
                    a[i - 1][j] += a[i][j + 1];
                }
                else
                {
                    a[i - 1][j] += a[i][j];
                }
            }
        }
        printf("%d\n", a[0][0]);
    }
    return 0;
}