#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[1000] = {1};
        int n;
        scanf("%d", &n);
        int q = 2;
        int len = 1;
        while (q <= n)
        {
            int x = 0;
            int num = 0;
            while (x < len)
            {
                arr[x] = arr[x] * q;
                arr[x] = arr[x] + num;
                num = arr[x] / 10;
                arr[x] = arr[x] % 10;
                x++;
            }
            while (num)
            {
                arr[len] = num % 10;
                num /= 10;
                len++;
            }

            q++;
        }
        len--;
        while (len >= 0)
        {
            printf("%d", arr[len]);
            len--;
        }
        printf("\n");
    }
    return 0;
}