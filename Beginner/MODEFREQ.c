#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int b[10001] = {0};
        int a[11] = {0};
        int u;
        for (int i = 0; i < n; i++)
        {

            scanf("%d", &u);
            a[u]++;
        }
        int max = 0, mn;
        for (int i = 0; i < 11; i++)
        {
            u = a[i];
            if (u != 0)
            {
                b[u]++;
            }
        }
        // for (int i = 0; i < 11; i++)
        // {
        //     printf("- %d ", a[i]);
        // }
        // printf("\n");
        // for (int i = 0; i < 11; i++)
        // {
        //     printf("-- %d ", b[i]);
        // }
        // printf("\n");
        for (int i = 0; i < 10001; i++)
        {
            if (b[i] > max)
            {
                max = b[i];
                mn = i;
            }
        }

        printf("%d\n", mn);
    }
    return 0;
}