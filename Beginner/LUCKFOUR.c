#include <stdio.h>

int main()
{
    int t;
    int n;

    scanf("%d", &t);
    while (t--)
    {
        int sum = 0;
        scanf("%d", &n);
        while (n)
        {
            if (n % 10 == 4)
            {
                sum++;
            }
            n /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}