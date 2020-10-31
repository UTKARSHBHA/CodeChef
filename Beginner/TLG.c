#include <stdio.h>

int main()
{
    int t, n, m;
    int max = -1, win, min = 1;
    int dif = 0;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        dif += n - m;
        if (dif > max)
        {
            max = dif;
        }
        if (dif < min)
        {
            min = dif;
        }
    }
    int res;
    if (max > (-min))
    {
        res = max;
        win = 1;
    }
    else
    {
        res = (-min);
        win = 2;
    }
    printf("%d %d\n", win, res);
    return 0;
}