#include <stdio.h>
int main()
{
    int a[20], b[20], m, n, i, j;
    printf("Enter size of array A : ");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        printf("Enter element A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter size of array B : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element B[%d]: ", i);
        scanf("%d", &b[i]);
    }
    // Cartesian Product of A and B
    printf("Cartesian Product = ");
    printf("{");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("(%d,%d)", a[i], b[j]);
            printf(",");
        }
    }
    printf("}");
}
