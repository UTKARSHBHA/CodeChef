#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int k;
        scanf("%d", &k);

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == j && j == 0)
                {
                    printf("O");
                    k--;
                }

                else if (k)
                {
                    printf(".");
                    k--;
                }
                else
                {
                    printf("X");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}