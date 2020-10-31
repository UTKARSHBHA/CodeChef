#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char b[n];
    scanf("%s", b);
    int c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] == '1')
        {
            break;
        }
        c++;
    }
    printf("%d\n", c);
    return 0;
}