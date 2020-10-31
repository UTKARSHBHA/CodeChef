#include <stdio.h>
#include <math.h>

int fun(int p)
{
    static int c;
    c = 0;
    if (p == 0)
    {
        return c;
    }
    int i = 0;
    while (i < 12)
    {
        if (pow(2, i) <= p)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    int u = p - pow(2, i - 1);
    fun(u);
    c++;
    return c;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int p;
        scanf("%d", &p);
        // printf("%d", p);
        int c = fun(p);
        printf("%d\n", c);
    }
    return 0;
}