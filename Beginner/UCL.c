#include <stdio.h>
#include <string.h>
struct team
{
    int point;
    int diff;
    char *name;
};

int main()
{
    int t;
    struct team arr[4];
    scanf("%d", &t);
    while (t--)
    {
        int c = 0;
        char a[11], b[11];
        int i, j, number = 12;
        int k = -1;
        while (number--)
        {
            int flag = 0;
            scanf("%s %d vs. %d %s", a, &i, &j, b);
            // printf("check\n");
            int u;
            for (u = 0; u <= k; k++)
            {
                if (strcmp(a, arr[u].name) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                arr[u].diff += i - j;
                if (i > j)
                {
                    arr[u].point += 3;
                }
                else if (i == j)
                {
                    arr[u].point += 1;
                }
            }
            else
            {
                k++;
                arr[k].name = a;
                arr[k].diff += i - j;
                if (i > j)
                {
                    arr[k].point += 3;
                }
                else if (i == j)
                {
                    arr[k].point += 1;
                }
            }
            int v;
            flag = 0;
            for (v = 0; v <= k; k++)
            {
                if (strcmp(b, arr[v].name) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                arr[v].diff += j - i;
                if (j > i)
                {
                    arr[v].point += 3;
                }
                else if (i == j)
                {
                    arr[v].point += 1;
                }
            }
            else
            {
                k++;
                arr[k].name = b;
                arr[v].diff += j - i;
                if (j > i)
                {
                    arr[v].point += 3;
                }
                else if (i == j)
                {
                    arr[v].point += 1;
                }
            }
        }
        int max = 0, n_max;
        for (int y = 0; y < 4; y++)
        {
            if (max < arr[y].point)
            {
                max = arr[y].point;
                n_max = y;
            }
            else if (max == arr[y].point)
            {
                if (arr[n_max].diff < arr[y].diff)
                {
                    max = arr[y].diff;
                    n_max = y;
                }
            }
        }
        printf("%s ", arr[n_max].name);
        arr[n_max].point = 0;
        max = 0;
        n_max;
        for (int y = 0; y < 4; y++)
        {
            if (max < arr[y].point)
            {
                max = arr[y].point;
                n_max = y;
            }
            else if (max == arr[y].point)
            {
                if (arr[n_max].diff < arr[y].diff)
                {
                    max = arr[y].diff;
                    n_max = y;
                }
            }
        }
        printf("%s\n", arr[n_max].name);
    }
    return 0;
}