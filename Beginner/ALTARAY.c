#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        // a[n + 1] = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int c = 1;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] > 0 && a[i + 1] < 0) || (a[i] < 0 && a[i + 1] > 0))
            {
                c++;
                continue;
            }
            while (c)
            {
                printf("%d ", c);
                c--;
            }
            c++;
        }
        c--;
        while (c)
        {
            printf("%d ", c);
            c--;
        }
        printf("\n");
    }
    return 0;
}