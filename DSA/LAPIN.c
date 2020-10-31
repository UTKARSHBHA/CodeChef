#include <stdio.h>
#include <strings.h>
int main()
{
    int t, l;
    char s[1000];
    int f = 0;
    scanf("%d", &t);
    while (t--)
    {
        int a[200] = {0};

        scanf("%s", s);
        l = strlen(s) - 1;
        int i = 0;
        while (i < l)
        {
            int q = s[i];

            int p = s[l];

            a[q]++;
            a[p]--;

            i++;
            l--;
        }
        f = 0;
        for (int j = 0; j < 200; j++)
        {
            if (a[j] != 0)
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}