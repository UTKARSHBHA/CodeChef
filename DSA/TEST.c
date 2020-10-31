#include <stdio.h>

int main()
{
    int n, f = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == 42)
        {
            break;
        }

        printf("%d\n", n);
    }
    return 0;
}