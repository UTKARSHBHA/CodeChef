#include <bits/stdc++.h>
using namespace std;
#define ll long long int
long long int mod = 1000000007;

ll solve(ll a, ll b)
{
    long long res = 1;

    while (b)
    {
        if (b & 1)
        {
            res = ((res % mod) * (a % mod)) % mod;
        }
        a = ((a % mod) * (a % mod)) % mod;
        b = b >> 1;
    }
    return res;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll res = 1;
        for (ll i = l + 1; i <= r; i++)
        {
            res = ((res % mod) * (solve(l, i) % mod)) % mod;
        }
        cout << res << endl;
    }

    return 0;
}