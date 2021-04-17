#include <bits/stdc++.h>
using namespace std;

float solve(float res)
{
    float val = (int)(res * 100 + 0.5);
    return (float)val / 100;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c, v;
        cin >> a >> b >> c >> v;
        float res = a * b * c * v;
        // res = solve(res);
        res = 100 / res;
        res = solve(res);
        float bo = 9.58f;
        bo = solve(bo);
        if (res < bo)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}