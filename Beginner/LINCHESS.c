#include <stdio.h>
#define ll long long
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        ll k, p, max = 1000000000;
        scanf("%d %lld", &n, &k);

        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &p);
            if (p < k)
            {
                if (k % p == 0)
                {
                    if (k / p < max)
                    {
                        max = p;
                    }
                }
            }
        }
        if (max == 1000000000)
        {
            printf("%d\n", -1);
        }
        else
        {
            printf("%lld\n", max);
        }
    }
    return 0;
}