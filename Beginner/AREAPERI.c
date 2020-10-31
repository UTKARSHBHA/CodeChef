#include <stdio.h>

int main()
{
    int l, b;
    scanf("%d%d", &l, &b);
    int area = l * b;
    int peri = 2 * (l + b);
    if (area > peri)
    {
        printf("Area\n%d\n", area);
    }
    else if (area < peri)
    {
        printf("Peri\n%d\n", peri);
    }
    else
    {
        printf("Eq\n%d\n", peri);
    }
    return 0;
}