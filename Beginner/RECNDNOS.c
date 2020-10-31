#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1];
        a[n] = -1;
        int b[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                b[a[i]]++;
                i++;
            }
            else
            {
                b[a[i]]++;
            }
        }
        int max = 0, ind;
        for (int i = 0; i < 1001; i++)
        {
            if (b[i] > max)
            {
                max = b[i];
                ind = i;
            }
        }
        printf("%d\n", ind);
    }
    return 0;
}