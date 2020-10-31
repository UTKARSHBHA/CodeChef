#include <stdio.h>

int fun(int a)
{
    int res = 0;
    while (a)
    {
        res += a % 10;
        a /= 10;
    }
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        int x = 0, y = 0, ca = 0, cb = 0;
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d%d", &a, &b);
            x = fun(a);
            y = fun(b);
            if (x > y)
            {
                ca++;
            }
            else if (y > x)
            {
                cb++;
            }
            else
            {
                ca++;
                cb++;
            }
        }
        if (ca > cb)
        {
            printf("0 %d\n", ca);
        }
        else if (ca < cb)
        {
            printf("1 %d\n", cb);
        }
        else
        {
            printf("2 %d\n", ca);
        }
    }
    return 0;
}