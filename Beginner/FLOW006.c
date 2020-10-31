#include <stdio.h>

void sum(int n)
{
    int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    printf("%d\n", res);
}

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        sum(n);
    }
    return 0;
}