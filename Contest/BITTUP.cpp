#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;
long long power(long a, long b)
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
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long res = power(2, n);
        res--;
        // cout << res << "res \n";
        long long ans = power(res, m);
        cout << ans << endl;
    }

    return 0;
}