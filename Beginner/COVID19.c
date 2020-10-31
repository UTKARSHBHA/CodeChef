#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int min = 9999, max = -1, f = 0, c = 1;
        for (int i = 0; i < n - 1; i++)
        {

            if (abs(arr[i + 1] - arr[i]) < 3)
            {
                f = 1;
                c++;
            }
            else if (abs(arr[i + 1] - arr[i]) > 2)
            {
                f = 0;
            }
            if (f == 0 || (i == n - 2))
            {
                if (c > max)
                {
                    max = c;
                }
                if (c < min)
                {
                    min = c;
                }
                c = 1;
            }
        }
        printf("%d %d\n", min, max);
    }
    return 0;
}