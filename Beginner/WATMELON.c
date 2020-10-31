#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, sum = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a);
            sum += a;
        }
        if (sum >= 0)
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
