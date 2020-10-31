#include <stdio.h>

int main()
{
    int t, a, b, c;

    scanf("%d", &t);
    int res, temp;
    while (t--)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (b > a)
        {
            temp = a;
            a = b;
            b = temp;
            if (c > a)
            {
                temp = a;
                a = c;
                c = temp;
            }
            if (c > b)
            {
                temp = b;
                b = c;
                c = temp;
            }
        }
        else
        {
            if (c > a)
            {
                temp = a;
                a = c;
                c = temp;
            }
            if (c > b)
            {
                temp = c;
                c = b;
                b = temp;
            }
        }
        printf("%d\n", b);
    }
    return 0;
}