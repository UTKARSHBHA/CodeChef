#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll odds1, evens1, odds2, evens2;

        if (a % 2 == 1)
        {
            odds1 = a / 2 + 1;
            evens1 = a / 2;
        }
        else
        {
            odds1 = a / 2;
            evens1 = a / 2;
        }
        if (b % 2 == 1)
        {
            odds2 = b / 2 + 1;
            evens2 = b / 2;
        }
        else
        {
            odds2 = b / 2;
            evens2 = b / 2;
        }
        // cout << odds1 << " " << evens1 << endl
        //      << odds2 << " " << evens2 << endl;
        ll res;
        res = (odds1 * odds2) + (evens1 * evens2);

        cout << res << endl;
    }

    return 0;
}