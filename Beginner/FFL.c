#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s;

        scanf("%d%d", &n, &s);
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        int ma = 101, mb = 101;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < ma && b[i] == 0)
            {
                ma = a[i];
            }
            else if (a[i] < mb && b[i] == 1)
            {
                mb = a[i];
            }
        }
        if (ma + mb + s <= 100)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}