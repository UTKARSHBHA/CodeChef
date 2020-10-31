#include <stdio.h>

int arr[1000000] = {0};
int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        arr[n]++;
    }
    n = 0;
    while (n < 1000000)
    {
        while (arr[n])
        {
            printf("%d\n", n);
            arr[n]--;
        }
        n++;
    }

    return 0;
}