#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        int a[n];
        int tp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tp += a[i];
        }
        int mc = tp / k;
        int res = min(mc, d);
        cout << res << endl;
    }

    return 0;
}