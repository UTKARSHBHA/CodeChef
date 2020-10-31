#include <stdio.h>

int main(void)
{

    int t, n, i, ind, val;
    long int u, d;
    scanf("%d", &t);

    while (t--)
    {
        ind = 0;
        val = 1;
        scanf("%d %ld %ld", &n, &u, &d);
        long int a[n];

        for (i = 1; i <= n; i++)
        {
            scanf("%ld", &a[i]);
        }

        for (i = 1; i <= n - 1; i++)
        {

            if ((a[i] < a[i + 1]) && (a[i + 1] - a[i] <= u))
            {
                continue;
            }
            else if ((a[i] > a[i + 1]) && (a[i] - a[i + 1] <= d))
            {
                continue;
            }
            else if ((a[i] > a[i + 1]) && (a[i] - a[i + 1] > d) && (val--))
            {
                continue;
            }
            else if (a[i] == a[i + 1])
            {
                continue;
            }
            else
            {
                break;
            }
        }

        printf("%d\n", i);
    }

    return 0;
}
