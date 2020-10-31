#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        char str[35];
        int j = 0, i = 0;

        scanf(" %[^\n]", str);
        while (str[i] != '\0')
        {
            if (str[i] == ' ')
            {
                printf("%c. ", toupper(str[j]));
                j = i + 1;
            }
            i++;
        }
        printf("%c", toupper(str[j]));
        j++;
        while (str[j] != '\0')
        {
            printf("%c", tolower(str[j]));
            j++;
        }
        printf("\n");
    }
    return 0;
}