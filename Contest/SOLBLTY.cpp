#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b;
        cin >> x >> a >> b;

        int res = a + (100 - x) * b;
        res *= 10;
        cout << res << endl;
    }

    return 0;
}