#include <stdio.h>

int main()
{
    int n, k, count = 0;
    long long int l;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &l);
        if (l % k == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}