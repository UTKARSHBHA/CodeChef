#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool sortbysec(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    return (a.second < b.second);
}

void helper1(vector<pair<ll, ll>> &arr, ll n, vector<ll> &mhsf)
{
    mhsf[0] = 0;
    for (int)
}

ll area(pair<ll, ll> a, pair<ll, ll> b)
{
    ll res = (sqrt((a.first - b.first) * (a.first - b.first)) *
              sqrt((a.second - b.second) * (a.second - b.second)));

    return res;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> arr(n);
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            arr.push_back({x, y});
        }
        ll res = LLONG_MAX;
        sort(arr.begin(), arr.end());
        vector<ll> mhsf(n);
        helper1(arr, n, mhsf);
        for (ll i = 0; i < n; i++)
        {
            ll asf = area(arr[0], arr[i]);
            if (i + 1 < n)
            {
                asf += area(arr[i + 1], arr[n - 1]);
            }
            cout << asf << " debug" << endl;
            res = min(res, asf);
        }
        sort(arr.begin(), arr.end(), sortbysec);
        for (ll i = 0; i < n; i++)
        {
            ll asf = area(arr[0], arr[i]);
            if (i + 1 < n)
            {
                asf += area(arr[i + 1], arr[n - 1]);
            }
            res = min(res, asf);
        }
        cout << res << endl;
    }
}