#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res;

        ll five = 20, four = 18, three = 15, two = 11;

        if (n == 1)
        {
            res = five;
        }
        else if (n == 2)
        {
            res = four * 2;
        }
        else if (n == 3)
        {
            res = three + four * 2;
        }
        else if (n == 4)
        {
            res = three * 4;
        }
        else
        {
            ll rem = n % 4;
            if (rem == 0)
            {
                res = (n / 4 - 1) * (two * 4) + three * 4;
            }
            else if (rem == 1)
            {
                res = (n / 4 - 1) * (two * 4) + three * 3 + two * 1 + five * 1;
            }
            else if (rem == 2)
            {
                res = (n / 4 - 1) * (two * 4) + four * 2 + three * 2 + two * 2;
            }
            else if (rem == 3)
            {
                res = (n / 4 - 1) * (two * 4) + four * 2 + three * 2 + two * 3;
            }
        }

        cout << res << endl;
    }

    return 0;
}