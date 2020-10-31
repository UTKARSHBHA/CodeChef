#include <stdio.h>
#include <string.h>

int main()
{
    int t, act, score, rank, bug;
    char origin[20], s[20];
    scanf("%d", &t);

    while (t--)
    {
        score = 0;
        scanf("%d", &act);
        scanf(" %s", origin);
        while (act--)
        {
            scanf(" %s", s);

            if (strcmp(s, "CONTEST_WON") == 0)
            {
                score += 300;
                scanf("%d", &rank);
                if (rank < 20)
                {
                    score += (20 - rank);
                }
            }
            else if (strcmp(s, "TOP_CONTRIBUTOR") == 0)
            {
                score += 300;
            }
            else if (strcmp(s, "BUG_FOUND") == 0)
            {
                scanf("%d", &bug);
                score += bug;
            }
            else if (strcmp(s, "CONTEST_HOSTED") == 0)
            {
                score += 50;
            }
        }
        if (strcmp(origin, "INDIAN") == 0)
        {
            printf("%d\n", score / 200);
        }
        else if (strcmp(origin, "NON_INDIAN") == 0)
        {
            printf("%d\n", score / 400);
        }
    }
    return 0;
}