#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a, const void *b)
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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        qsort(a, n, sizeof(int), cmpfunc);
        qsort(b, n, sizeof(int), cmpfunc);

        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] < b[i] ? a[i] : b[i]);
        }
        printf("%lld\n", sum);
    }
    return 0;
}