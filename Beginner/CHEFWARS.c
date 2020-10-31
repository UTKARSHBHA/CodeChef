#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, p;
        scanf("%d%d", &h, &p);

        while (1)
        {
            if (h <= 0)
            {
                printf("1\n");
                break;
            }
            if (p <= 0)
            {
                printf("0\n");
                break;
            }
            h = h - p;
            p = ceil(p / 2);
        }
    }
    return 0;
}