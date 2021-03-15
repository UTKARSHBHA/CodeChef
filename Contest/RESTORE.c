#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int max = 4000000;
        int l = 0;
        int min = 2;
        int n;
        int b;
        int a[100001] = {0};
        a[1] = 2;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &b);
            if (b == i)
            {
                if (a[b] == 0)
                {
                    a[i] = max - l;
                    l++;
                }
                else if (a[b] % b != 0)
                {
                    a[b] *= b;
                }
            }
            else
            {
                if (a[i] == 0)
                {
                    a[i] = min;
                    min++;
                }
                if (a[b] == 0)
                {
                    a[b] = a[i];
                }
                else if (a[b] % a[i] != 0)
                {
                    a[b] *= a[i];
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}