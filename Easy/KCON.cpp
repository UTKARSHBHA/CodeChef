#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll kadane(ll arr[], ll n)
{
    ll res = LONG_LONG_MIN;
    ll curr = LONG_LONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        if (curr < 0)
        {
            curr = arr[i];
        }
        else
        {
            curr += arr[i];
        }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];

        ll sum = 0;
        ll res = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll temp[2 * n];
        for (ll i = 0; i < n; i++)
        {
            temp[i] = arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            temp[n + i] = arr[i];
        }

        if (k == 1)
        {
            res = kadane(arr, n);
        }
        else if (sum > 0)
        {

            res = sum * (k - 2) + kadane(temp, 2 * n);
        }
        else
        {
            res = kadane(temp, 2 * n);
        }

        cout << res << endl;
    }

    return 0;
}