#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, xa, xb;
        cin >> a >> b >> xa >> xb;
        int res = 0;

        res += ceil(xa / a);
        res += ceil(xb / b);
        cout << res << endl;
    }

    return 0;
}