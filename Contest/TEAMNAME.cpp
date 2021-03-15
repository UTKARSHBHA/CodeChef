#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int res = 0;
        int n;
        cin >> n;

        unordered_set<string> arr;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            arr.insert(s);
        }
        for (auto it = arr.begin(); it != arr.end(); it++)
        {
            for (auto jt = next(it); jt != arr.end(); jt++)
            {
                string a = *it;
                a[0] = (*jt).at(0);
                string b = *jt;
                b[0] = (*it).at(0);
                // if (a == b || a == it->first || a == jt->first || b == it->first || b == jt->first)
                // {
                //     continue;
                // }
                if (arr.find(a) == arr.end() && arr.find(b) == arr.end())
                {
                    res++;
                }
            }
        }

        cout << res * 2 << endl;
    }

    return 0;
}