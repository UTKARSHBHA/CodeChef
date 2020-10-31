#include <stdio.h>
#include <math.h>
int main()
{
    int t, n;

    scanf("%d", &t);
    while (t--)
    {
        int f = 0;
        scanf("%d", &n);
        if (n >= 2)
        {

            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    // printf("no\n");
                    f = 1;
                    break;
                }
            }
        }
        else
        {
            f = 1;
        }
        if (f)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}