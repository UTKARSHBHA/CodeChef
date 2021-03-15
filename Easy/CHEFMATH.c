#include <stdio.h>
#define ll long long int

ll fib(ll i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    return fib(i - 1) + fib(i - 2);
}

ll fun(ll x, int k)
{
    static ll res = 0;
    if (x == 0 && k == 0)
    {
        return res++;
    }
    else if (x > 0 || k > 0)
    {
        return 0;
    }
    int i = 1;
    while (x > 0 && k > 0)
    {
        x = x - fib(i);
        k--;
        fun(x, k);
    }
    return res;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        ll x;
        scanf("%lld%d", x, k);
        printf("%d", fun(x, k) % 1000000007);
    }
    return 0;
}