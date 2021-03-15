#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int totala = 0, totalb = 0;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totala += a[i];
        }

        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            totalb += b[i];
        }

        sort(a, a + n);
        sort(b, b + m);

        int totaldiff = totalb - totala;
        int swaps = 0;

        // int o = min(n, m);
        // int diff[o];
        // for (int i = 0; i < o; i++)
        // {
        //     diff[i] = b[i] - a[i];
        // }
        // sort(diff, diff + o);
        // o--;
        // while (totaldiff >= 0 && o >= 0)
        // {
        //     totaldiff -= diff[o] * 2;
        //     o--;
        //     swaps++;
        // }
        // cout << "totaldiff - " << totaldiff << endl;

        int i = 0, j = m - 1;
        while (totaldiff >= 0 && i < n && j >= 0)
        {
            totaldiff -= 2 * (b[j] - a[i]);
            i++;
            j--;
            swaps++;
        }

        if (totaldiff >= 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << swaps << endl;
        }
    }

    return 0;
}