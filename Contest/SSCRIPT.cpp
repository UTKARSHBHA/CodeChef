#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int f = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                f++;
            }
            else
            {
                f = 0;
            }
            if (f == k)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
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