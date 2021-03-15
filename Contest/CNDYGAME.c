#include <stdio.h>
#define ll long long int
int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n;
        ll m = 1000000007;
        scanf("%lld", &n);
        ll a[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }
        ll q;
        scanf("%lld", &q);
        while (q--)
        {
            ll r;
            ll res = 0;
            scanf("%lld", &r);

            for (ll i = 1; i <= r; i++)
            {
                ll j = (((i - 1) % n) + 1);
                if (a[j] & (a[j] - 1))
                {
                    res = (res + a[j] - 1) % m;
                }
                else
                {
                    res = (res + a[j]) % m;
                }
                if (i == n)
                {
                    if (a[j] & (a[j] - 1))
                    {
                        res = (res + a[j] - 1) % m;
                    }
                    else
                    {
                        res = (res + a[j]) % m;
                    }
                }
            }
            printf("%lld\n", res % m);
        }
    }
    return 0;
}