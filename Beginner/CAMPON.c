#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int D;
        scanf("%d", &D);
        int d[D], p[D];
        for (int i = 0; i < D; i++)
        {
            scanf("%d%d", &d[i], &p[i]);
        }
        int Q;
        scanf("%d", &Q);
        int dead, req;

        for (int j = 0; j < Q; j++)
        {
            scanf("%d%d", &dead, &req);
            int sum = 0, i = 0;
            while (dead >= d[i] && i < D)
            {
                sum += p[i];
                i++;
            }
            if (sum >= req)
            {
                printf("Go Camp\n");
            }
            else
            {
                printf("Go Sleep\n");
            }
        }
    }
    return 0;
}