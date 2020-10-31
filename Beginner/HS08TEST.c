#include <stdio.h>

int main()
{
    int x;
    float y;

    scanf("%d", &x);
    scanf("%f", &y);

    if (x % 5 == 0 && x <= (y - 0.5f))
    {
        y = y - x - 0.5f;
    }
    printf("%.2f\n", y);

    return 0;
}