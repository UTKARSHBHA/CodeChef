#include <stdio.h>

int main()
{
    int t;
    int n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        int f = n % 10;
        while (n > 9)
        {
            n /= 10;
        }
        printf("%d\n", n + f);
    }
    return 0;
}