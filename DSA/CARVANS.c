#include <stdio.h>

int main()
{
    signed int t;
    scanf("%d", &t);
    while (t--)
    {
        signed n = __INT64_MAX__, m, c = 0, u;
        scanf("%d", &u);
        while (u--)
        {
            scanf("%d", &m);
            if (m <= n)
            {
                n = m;
                c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}