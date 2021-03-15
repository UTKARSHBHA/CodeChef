#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;

    ll res = 0LL, day = 1LL;
    while (res < p)
    {
        if (day >= d1)
        {
            res += v1;
        }
        if (day >= d2)
        {
            res += v2;
        }
        day++;
    }
    day--;
    cout << day;

    return 0;
}