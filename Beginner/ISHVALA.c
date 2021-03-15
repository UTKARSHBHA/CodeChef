#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;

        scanf("%d%d", &n, &m);

        long long int mat[101][101] = {0};

        int x, y, s;
        scanf("%d%d%d", &x, &y, &s);
        int a;
        for (int i = 1; i <= x; i++)
        {
            scanf("%d", &a);
            for (int j = 1; j <= m; j++)
            {
                mat[a][j] = 1;
            }
        }
        for (int i = 1; i <= y; i++)
        {
            scanf("%d", &a);
            for (int j = 1; j <= n; j++)
            {
                mat[j][y] = 1;
            }
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= m; j++)
        //     {
        //         printf("%d ", mat[i][j]);
        //     }
        //     printf("\n");
        // }
        }
    return 0;
}