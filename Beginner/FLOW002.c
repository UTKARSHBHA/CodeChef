#include <stdio.h>

int main()
{
    int t, n, m;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &m, &n);
        printf("%d\n", m % n);
    }
    return 0;
}