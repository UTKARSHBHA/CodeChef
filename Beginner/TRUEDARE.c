#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int tr, dr, ts, ds;
        int Tr[101] = {0}, Ts[101] = {0}, Dr[101] = {0}, Ds[101] = {0};
        int a;
        scanf("%d", &tr);
        for (int i = 0; i < tr; i++)
        {
            scanf("%d", &a);
            Tr[a] = 1;
        }
        scanf("%d", &dr);
        for (int i = 0; i < dr; i++)
        {
            scanf("%d", &a);
            Dr[a] = 1;
        }
        scanf("%d", &ts);
        for (int i = 0; i < ts; i++)
        {
            scanf("%d", &a);
            Ts[a] = 1;
        }
        scanf("%d", &ds);
        for (int i = 0; i < ds; i++)
        {
            scanf("%d", &a);
            Ds[a] = 1;
        }
        int f = 1;
        for (int i = 0; i < 101; i++)
        {
            if (Ts[i] == 1 && Tr[i] != 1)
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
        {
            printf("no\n");
            continue;
        }
        f = 1;
        for (int i = 0; i < 101; i++)
        {
            if (Ds[i] == 1 && Dr[i] != 1)
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
        {
            printf("no\n");
            continue;
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}