#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k, l, r;
        scanf("%d%d%d%d%d", &n, &m, &k, &l, &r);
        int c[n], p[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d", &c[i], &p[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int mm = m;
            while (mm--)
            {
                if (c[i] > k + 1)
                {
                    c[i]--;
                }
                else if (c[i] < k - 1)
                {
                    c[i]++;
                }
                else if (c[i] >= k - 1 && c[i] <= k + 1)
                {
                    c[i] = k;
                }
            }
        }
        int min = 10000001;
        for (int i = 0; i < n; i++)
        {
            if (c[i] >= l && c[i] <= r && p[i] < min)
            {
                min = p[i];
            }
        }
        if (min == 10000001)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", min);
        }
    }
    return 0;
}