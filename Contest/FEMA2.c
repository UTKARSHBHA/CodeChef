#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int res = 0;
        int k, n;
        scanf("%d%d", &n, &k);
        char s[n];
        scanf(" %s", s);
        int i = 0;

        int kk = 0;

        while (s[i] != '\0')
        {
            int sheet = 0;
            int p = 0;

            int jj;
            int j;
            if (s[i] == 'M')
            {
                int f = 0;
                sheet = 0;

                for (j = i - 1; j >= kk; j--)
                {

                    if (s[j] == 'X')
                    {

                        kk = j + 1;
                        break;
                    }
                    else if (s[j] == ':')
                    {
                        sheet++;
                        continue;
                    }
                    else if (s[j] == 'I')
                    {
                        p = k + 1 - (-j + i) - sheet;
                        if (p > 0)
                        {

                            kk = j + 1;
                            // res++;
                            f = 1;

                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }

                sheet = 0;
                if (kk < i + 1)
                {
                    kk = i + 1;
                }
                for (jj = kk; s[jj] != '\0'; jj++)
                {

                    if (s[jj] == 'X')
                    {

                        kk = jj + 1;
                        break;
                    }
                    else if (s[jj] == ':')
                    {
                        sheet++;
                        continue;
                    }
                    else if (s[jj] == 'I')
                    {
                        p = k + 1 - (jj - i) - sheet;

                        if (p > 0)
                        {
                            kk = jj + 1;

                            f = 1;
                            // break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if (f)
                {
                    res++;
                }
            }
            i++;
        }

        printf("%d\n", res);
    }
    return 0;
}