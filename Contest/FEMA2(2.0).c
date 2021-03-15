#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        char s[n];
        scanf(" %s", s);

        int i = 0, p = 0;
        int kk = 0;
        while (s[i] != '\0')
        {

            if (s[i] == 'M')
            {
                int sheet = 0;
                int f = 0;
                for (int j = i - 1; j >= kk; j--)
                {
                    if (s[j] == ':')
                    {
                        sheet++;
                    }
                    else if (s[j] == 'X')
                    {
                        break;
                    }
                    else if (s[j] == 'I')
                    {
                        p = k + 1 - (i - j) - sheet;
                        if (p > 0)
                        {
                            kk = j;
                            f = 1;
                            break;
                        }
                    }
                }
            }

            i++;
        }
    }
    return 0;
}