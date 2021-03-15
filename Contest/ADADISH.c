#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int rtn(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[6] = {0};

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), rtn);
        int sum = 0;

        while (n > 2)
        {
            if (arr[n - 2] < arr[n - 1])
            {
                sum += arr[n - 2];
            }
            else
            {
                sum += arr[n - 1];
            }
            arr[n - 2] = abs(arr[n - 1] - arr[n - 2]);

            n--;
        }
        if (arr[0] > arr[1])
        {
            sum += arr[0];
        }
        else
        {
            sum += arr[1];
        }

        printf("%d\n", sum);
    }
    return 0;
}