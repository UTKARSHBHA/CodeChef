#include <stdio.h>
#include <string.h>
int main()
{
    char s[27];
    scanf("%s", s);
    // printf("%s", s);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char w[13];
        scanf(" %s", w);
        int f = 0;
        for (int i = 0; i < strlen(w); i++)
        {
            f = 0;
            for (int j = 0; j < strlen(s); j++)
            {
                if (w[i] == s[j])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                break;
            }
        }
        if (f)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}