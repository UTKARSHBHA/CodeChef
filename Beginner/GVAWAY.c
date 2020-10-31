#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r, k;
        scanf("%d%d%d", &l, &r, &k);
        if (l == r)
        {
            k = 1;
        }
        printf("%d\n", k);
    }
    return 0;
}