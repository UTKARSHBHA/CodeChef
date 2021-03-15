#include <bits/stdc++.h>
// #include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        // int arr[n];
        int risk = 0, notRisk = 0;
        for (int i = 0; i < n; i++)
        {
            int tt;
            cin >> tt;
            if (tt >= 80 || tt <= 9)
            {
                risk++;
            }
            else
            {
                notRisk++;
            }
        }
        int res = 0;
        // cout << risk << " " << notRisk << endl;
        res += ceil((float)risk / d);
        res += ceil((float)notRisk / d);

        cout << res << endl;
    }

    return 0;
}