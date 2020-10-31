#include <stdio.h>

int main()
{
    int buck, mug, total = 0, count = 0, a;

    scanf("%d %d", &buck, &mug);

    while (total < (buck * 8 / 10))
    {
        scanf("%d", &a);
        total += a;
        count++;
    }
    printf("%d\n", count);
    return 0;
}