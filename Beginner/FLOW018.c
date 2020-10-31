#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        long long int sum = 1;
        for (int i = 2; i <= n; i++)
        {
            sum = sum * i;
        }
        printf("%lld\n", sum);
    }
    return 0;
}