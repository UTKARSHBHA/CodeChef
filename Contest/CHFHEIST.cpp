#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int D, d, P, Q;
        cin >> D >> d >> P >> Q;
        long long int res = 0;
        long long int n = D / d;

        if (n <= 1)
        {
            res = d * P + (D - d) * (Q + P);
        }
        else
        {
            if (n & 1)
            {
                res = d * n * (P + (n - 1) / 2 * Q) + (D % d) * (P + n * Q);
            }
            else
            {
                res = d * n / 2 * (2 * P + (n - 1) * Q) + (D % d) * (P + n * Q);
            }
        }

        cout << res << endl;
    }

    return 0;
}