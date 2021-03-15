#include <bits/stdc++.h>
using namespace std;

int minutes(string s, string m)
{

    char ch;

    int res = (s[0] - '0') * 10 + (s[1] - '0');
    if (res == 12)
    {
        res = 0;
    }
    res *= 60;
    res += (s[3] - '0') * 10 + (s[4] - '0');
    if (m == "PM")
    {
        res += 720;
    }
    return res;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string p, m;
        cin >> p >> m;
        int pp = minutes(p, m);
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string l, r, lm, rm;
            cin >> l >> lm;
            cin >> r >> rm;
            // cout << "m " << m << " lm " << lm << " rm " << rm << endl;
            int ll = minutes(l, lm);
            int rr = minutes(r, rm);
            if (ll > rr)
            {
                // if (lm == rm)
                // {
                //     if (lm == m)
                //     {
                //         rr += (24 * 60);
                //     }
                //     else if (lm != m)
                //     {
                //         ll -= (24 * 60);
                //     }
                // }
                // else{

                // }
            }
            // cout << "ll " << ll << " rr" << rr << endl;
            if ((ll <= pp) && (pp <= rr))
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}