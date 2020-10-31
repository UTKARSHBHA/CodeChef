#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        char s[5];
        scanf("%d", &n);
        int a[n];
        scanf(" %s", s);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        if (strcmp(s, "Dee") == 0 && n == 1 && a[0] % 2 == 0)
        {
            printf("Dee\n");
        }
        else
        {
            printf("Dum\n");
        }
    }
    return 0;
}