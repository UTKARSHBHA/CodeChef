#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ch = 0;
        string res = "";
        char temp;
        for (int i = 0; i < n; i++)
        {
            if (i % 4 == 0)
            {

                if (s[i] == '1')
                {
                    ch += 8;
                }
            }
            else if (i % 4 == 1)
            {
                if (s[i] == '1')
                {
                    ch += 4;
                }
            }
            else if (i % 4 == 2)
            {
                if (s[i] == '1')
                {
                    ch += 2;
                }
            }
            else if (i % 4 == 3)
            {
                if (s[i] == '1')
                {
                    ch += 1;
                }
                // cout << "ch - " << ch << endl;
                temp = 'a' + ch;
                res += temp;
                ch = 0;
            }
        }
        cout << res << endl;
    }

    return 0;
}