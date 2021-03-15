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
        ll arr[n];
        ll mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }

        ll res = 0;

        res = 2 * (mx - mn);
        cout << res << endl;
    }

    return 0;
}