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
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int c = 0, f = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (c <= 0)
                {
                    c = 5;
                }
                else
                {
                    f = 0;
                    break;
                }
            }
            else
            {
                c--;
            }
        }
        if (f == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}