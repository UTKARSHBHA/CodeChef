#include <stdio.h>

void rev(int n)
{
    int res = 0;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", res);
}
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        rev(n);
    }
    return 0;
}