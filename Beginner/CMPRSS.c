#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int f = 1;
        if (n == 1)
        {
            printf("%d\n", a[0]);
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((a[i + 1] - a[i]) == 1)
                {
                    f += 1;
                    continue;
                }
                else
                {

                    // printf(" f %d\n", f);
                    if (f == 1)
                    {
                        printf("%d", a[i]);
                    }
                    else if (f == 2)
                    {
                        printf("%d,%d", a[i - 1], a[i]);
                    }
                    else if (f > 2)
                    {
                        printf("%d...%d", a[i - f + 1], a[i]);
                    }
                    if (i != n - 1)
                    {
                        printf(",");
                    }
                    f = 1;
                }
            }
            printf("\n");
        }
    }
    return 0;
}