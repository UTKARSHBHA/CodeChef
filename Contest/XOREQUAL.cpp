#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll power(ll a, ll b, ll d)
{
    ll res = 1;
    while (b > 0)
    {
        if ((b & 1))
        {
            res = (res * a % d) % d;
        }
        a = (a % d * a % d) % d;
        b = b >> 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll d = 1000000007;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll val = power(2, n - 1, d);
        // ll res = val / 2 + 1;

        cout << val << endl;
    }

    return 0;
}