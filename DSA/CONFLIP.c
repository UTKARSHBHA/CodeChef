#include <stdio.h>
#include <math.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);
    int g, i, q;
    ll n;
    while (t--)
    {
        scanf("%d", &g);
        while (g--)
        {
            scanf("%d%lld%d", &i, &n, &q);
            if (i == q)
            {

                printf("%lld\n", n / 2);
            }
            else
            {
                ll res = ceil(n / 2.0);
                printf("%lld\n", res);
            }
        }
    }
    return 0;
}