#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b, c, d, p, q, y;
        scanf("%d%d%d%d%d%d%d%d", &n, &a, &b, &c, &d, &p, &q, &y);
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int res = 0;

        if (abs(arr[c] - arr[a]) * p > y)
        {
            res = abs(arr[b] - arr[a]) * p;
        }
        else
        {
            if ((y + abs(arr[c] - arr[d]) * q + abs(arr[d] - arr[b]) * p) < (abs(arr[b] - arr[a]) * p))
            {
                res = (y + abs(arr[c] - arr[d]) * q + abs(arr[d] - arr[b]) * p);
            }
            else
            {
                res = abs(arr[b] - arr[a]) * p;
            }
        }

        printf("%d\n", res);
    }
    return 0;
}