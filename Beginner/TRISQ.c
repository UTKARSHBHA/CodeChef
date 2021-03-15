#include <stdio.h>

int tri(int b)
{
    if (b - 2 < 2)
    {
        return 0;
    }
    return (b - 2) / 2 + tri(b - 2);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int b;
        scanf("%d", &b);
        printf("%d\n", tri(b));
    }
    return 0;
}