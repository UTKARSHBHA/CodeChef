#include <stdio.h>
int main()
{
    int T, N, max, i, a[101], d[101];
    scanf("%d", &T);

    while (T--)
    {
        max = 0;
        scanf("%d", &N);

        for (i = 1; i <= N; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 1; i <= N; i++)
        {
            scanf("%d", &d[i]);
        }
        for (i = 2; i < N; i++)
        {
            if (d[i] > a[i - 1] + a[i + 1] && d[i] > max)
            {
                max = d[i];
            }
        }
        if (d[1] > max && d[1] > a[2] + a[N])
        {
            max = d[1];
        }
        if (d[N] > max && d[N] > a[1] + a[N - 1])
        {
            max = d[N];
        }

        if (max == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", max);
        }
    }

    return 0;
}