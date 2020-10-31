#include <stdio.h>
#include <math.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        ll n;
        int i = 1, c = 0;
        scanf("%lld", &n);
        while (pow(5, i) <= n)
        {
            c += n / pow(5, i);
            i++;
        }
        printf("%d\n", c);
    }
    return 0;
}