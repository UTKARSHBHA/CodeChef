#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int s1, s2, k;
        scanf("%d%d%d", &s1, &s2, &k);
        int sum = s1 + s2;
        if ((sum / k) % 2 == 0)
            printf("\nChef");
        else
            printf("\nPaja");
    }
    return 0;
}
