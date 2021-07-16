#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        int res;
        res = max(x * 7, d * y + z * (7 - d));
        cout << res << endl;
    }
    return 0;
}