#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, c, l, x;
        int d1 = 0, c1;
        int d2 = 0, c2;
        int d3 = 0, c3;
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d%d%d", &c, &l, &x);
            if (l == 1)
            {
                if (x > d1)
                {
                    d1 = x;
                    c1 = c;
                }
                if (x == d1 && c < c1)
                {
                    c1 = c;
                }
            }

            else if (l == 2)
            {
                if (x > d2)
                {
                    d2 = x;
                    c2 = c;
                }
                if (x == d2 && c < c2)
                {
                    c2 = c;
                }
            }

            else if (l == 3)
            {
                if (x > d3)
                {
                    d3 = x;
                    c3 = c;
                }
                if (x == d3 && c < c3)
                {
                    c3 = c;
                }
            }
        }
        printf("%d %d\n", d1, c1);
        printf("%d %d\n", d2, c2);
        printf("%d %d\n", d3, c3);
    }
    return 0;
}