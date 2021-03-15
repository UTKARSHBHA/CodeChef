#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100001];
        scanf(" %s", &s);
        int sa, sb;
        scanf("%d %d", &sa, &sb);
        int i = 0;
        while (s[i] != 'A')
        {
            i++;
        }
        i++;
        int j = 0;

        while (s[i] != 'B')
        {
            j++;
            i++;
        }
        // printf("j %d\n", j);
        if ((j + 1) % (sa + sb) == 0)
        {
            printf("unsafe\n");
        }
        else
        {
            printf("safe\n");
        }
    }
    return 0;
}