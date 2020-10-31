#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, pos = 0, neg = 0, a;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            (a > 0) ? pos++ : neg++;
        }
        int min, max;

        if (pos == 0)
        {
            min = max = neg;
        }
        else if (neg == 0)
        {
            min = max = pos;
        }
        else
        {
            max = (pos > neg) ? pos : neg;
            min = (pos < neg) ? pos : neg;
        }

        printf("%d %d\n", max, min);
    }
    return 0;
}