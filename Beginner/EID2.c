#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a[3], c[3];
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &c[i]);
        }
        int f = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (a[i] < a[j] && c[i] < c[j])
                {
                    f = 1;
                }
                else if (a[i] > a[j] && c[i] > c[j])
                {
                    f = 1;
                }
                else if (a[i] == a[j] && c[i] == c[j])
                {
                    f = 1;
                }
                else
                {
                    f = 0;
                    goto label;
                }
            }
                }
    label:
        if (f)
        {
            printf("FAIR\n");
        }
        else
        {
            printf("NOT FAIR\n");
        }
    }
    return 0;
}