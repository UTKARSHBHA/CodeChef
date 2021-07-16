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
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        ll f[n];
        f[0] = arr[0];
        ll b[n];
        b[n - 1] = arr[n - 1];
        ll h[n];
        for (ll i = 1; i < n; i++)
        {
            f[i] = __gcd(f[i - 1], arr[i]);
        }
        for (ll i = n - 2; i >= 0; i--)
        {
            b[i] = __gcd(b[i + 1], arr[i]);
        }
        h[0] = b[1];
        h[n - 1] = f[n - 2];
        for (ll i = 1; i < n - 1; i++)
        {
            h[i] = __gcd(f[i - 1], b[i + 1]);
        }
        ll res = LONG_LONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            res = min(res, (sum - arr[i]) / h[i]);
        }
        res++;
        cout << res << endl;
    }

    return 0;
}