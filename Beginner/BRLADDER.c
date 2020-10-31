#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int min = (a < b ? a : b);
        if (abs(a - b) == 2)
        {
            printf("YES\n");
        }
        else if ((min % 2 != 0) && (abs(a - b) == 1))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}