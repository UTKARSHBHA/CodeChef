#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = 0;
        int f = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (f == 0)
            {
                if (s[i] == '1')
                {
                    f = 1;
                    res++;
                }
            }
            f = s[i] - '0';
        }
        cout << res << endl;
    }

    return 0;
}