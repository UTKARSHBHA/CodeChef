#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a[5];
    int p, sum;
    while (t--)
    {
        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        scanf("%d", &p);
        if ((sum * p / 24.0f) > 5.0f)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}