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
        a[0] = 0;
        int f = 1, p;
        for (int i = 0; i < n; i++)
        {
            f = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i] == a[j])
                {
                    f++;
                    p = j;
                }
            }
            if (f == 1)
            {
                a[i + 1] = 0;
            }
            else
            {
                a[i + 1] = i - p;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", a[i]);
        // }
        // printf("\n");
        printf("%d\n", f);
    }
    return 0;
}