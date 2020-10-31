#include <stdio.h>

int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c == 0)
        {
            printf("yes\n");
            continue;
        }
        else if (a + b - c == 0)
        {
            printf("yes\n");
            continue;
        }
        else if (a - b + c == 0)
        {
            printf("yes\n");
            continue;
        }
        else if (a - b - c == 0)
        {
            printf("yes\n");
            continue;
        }
        else if (-a + b + c == 0)
        {
            printf("yes\n");
            continue;
        }
        else if (-a + b - c == 0)
        {
            printf("yes\n");
            continue;
        }
        else if (-a - b + c == 0)
        {
            printf("yes\n");
            continue;
        }
        else if (-a - b - c == 0)
        {
            printf("yes\n");
            continue;
        }
        else
        {
            printf("no\n");
            continue;
        }
    }
    return 0;
}