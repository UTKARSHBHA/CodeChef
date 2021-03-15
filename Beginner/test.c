#include <stdio.h>

void tower(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        printf("Move %d to %d\n", from, to);
        return;
    }
    else
    {
        tower(n - 1, from, aux, to);
        printf("Move %d to %d\n", from, to);
        tower(n - 1, aux, to, from);
    }
}

int main()
{
    tower(2, 1, 2, 3);
    return 0;
}