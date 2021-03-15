#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        char s[101][21];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf(" %s", s[i]);
        }
        // printf("%s\n", s[0]);
        float tt = 0.0;
        for (int i = 0; i < n; i++)
        {
            float t = 0.0;
            int j = 0, count = 0;
            char pre = '0';
            while (s[i][j] != '\0')
            {
                if (s[i][j] == 'd' || s[i][j] == 'f')
                {
                    if (pre == 'd' || pre == 'f')
                    {
                        t += 0.4;
                        pre = s[i][j];
                        j++;
                    }
                    else
                    {
                        t += 0.2;
                        pre = s[i][j];
                        j++;
                    }
                }
                else
                {
                    if (pre == 'j' || pre == 'k')
                    {
                        t += 0.4;
                        pre = s[i][j];
                        j++;
                    }
                    else
                    {
                        t += 0.2;
                        pre = s[i][j];
                        j++;
                    }
                }
                printf("tt %f\n", tt);
            }
            for (int k = i; k < n; k++)
            {
                if (s[i] == s[k])
                {
                    count++;
                }
            }
            t = t + (count - 1) * (t / 2.0);
            tt += t;
        }
        printf("%d\n", (int)(tt * 10));
    }
    return 0;
}