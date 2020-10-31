#include <stdio.h>
#include <math.h>
int main()
{
    int t, n;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int m = floor(n / 2.0);
        printf("%d\n", m + 1);
    }
    return 0;
}