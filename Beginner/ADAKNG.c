#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int r, c, k;
        scanf("%d%d%d", &r, &c, &k);

        int l1, l2, b1, b2;
        l1 = l2 = b1 = b2 = k;
        // printf("%d %d %d\n", r, c, k);
        if ((r + k) > 8)
        {
            l1 = 8 - r;
        }
        if ((r - k) < 1)
        {
            l2 = r - 1;
        }
        if ((c + k) > 8)
        {
            b1 = 8 - c;
        }
        if ((c - k) < 1)
        {
            b2 = c - 1;
        }
        // printf("%d %d %d %d\n", l1, l2, b1, b2);
        int area = (l1 + l2 + 1) * (b1 + b2 + 1);
        printf("%d\n", area);
    }
    return 0;
}