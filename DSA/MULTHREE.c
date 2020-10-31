#include <stdio.h>
#define ll long long
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll k, tt;
        int d0, d1, d2;
        scanf("%lld%d%d", &k, &d0, &d1);

        d2 = (d0 + d1) % 10;
        int s = d0 + d1;
        ll c = ((s * 2) % 10) + ((s * 4) % 10) + ((s * 8) % 10) + ((s * 6) % 10);
        ll cn = (k - 3) / 4;

        if (k == 2)
        {
            tt = s;
        }
        else if (k == 3)
        {
            tt = 2 * s;
        }
        else
        {
            tt = s + d2;
            tt += cn * c;
            int j = 2;
            ll rem = ((k - 3) % 4);
            for (ll i = 1; i <= rem; i++)
            {
                tt += ((s * j) % 10);
                j *= 2;
            }
        }
        if (tt % 3 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}