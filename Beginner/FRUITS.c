#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);

        if (n < m)
        {
            if (k <= (m - n))
            {
                n += k;
                k = 0;
            }
            else
            {
                k -= (m - n);
                n = m;
            }
        }
        else if (m < n)
        {
            if (k <= (n - m))
            {
                m += k;
                k = 0;
            }
            else
            {
                k -= (n - m);
                m = n;
            }
        }
        // if (k)
        // {
        //     m += k / 2;
        //     n += (k - k / 2);
        //     k = 0;
        // }
        printf("%d\n", abs(m - n));
    }
    return 0;
}