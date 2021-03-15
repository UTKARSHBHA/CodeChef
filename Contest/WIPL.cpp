#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> dp;

int tower(vector<int> h, int ind, int suma, int sumb)
{

    if (suma <= 0 && sumb <= 0)
    {
        return 0;
    }

    if (ind < h.size())
    {

        string s = to_string(ind) + " " + to_string(suma) + " " + to_string(sumb);
        string sr = to_string(ind) + " " + to_string(sumb) + " " + to_string(suma);

        auto its = dp.find(s);
        if (its != dp.end())
        {
            return its->second;
        }
        int includeA, includeB, includeN;
        string sA = to_string(ind + 1) + " " + to_string(suma - h[ind]) + " " + to_string(sumb);
        string sAr = to_string(ind + 1) + " " + to_string(sumb) + " " + to_string(suma - h[ind]);
        string sB = to_string(ind + 1) + " " + to_string(suma) + " " + to_string(sumb - h[ind]);
        string sBr = to_string(ind + 1) + " " + to_string(sumb - h[ind]) + " " + to_string(suma);
        string sN = to_string(ind + 1) + " " + to_string(suma) + " " + to_string(sumb);
        string sNr = to_string(ind + 1) + " " + to_string(sumb) + " " + to_string(suma);
        auto ita = dp.find(sA);
        if (ita != dp.end())
        {
            includeA = 1 + ita->second;
        }
        else
        {
            includeA = tower(h, ind + 1, suma - h[ind], sumb);
            dp[sA] = includeA;
            dp[sAr] = includeA;
            includeA++;
        }

        auto itb = dp.find(sB);
        if (itb != dp.end())
        {
            includeB = 1 + itb->second;
        }
        else
        {
            includeB = tower(h, ind + 1, suma, sumb - h[ind]);
            dp[sB] = includeB;
            dp[sBr] = includeB;
            includeB++;
        }

        auto itn = dp.find(sN);
        if (itn != dp.end())
        {
            includeN = itn->second;
        }
        else
        {
            includeN = tower(h, ind + 1, suma, sumb);
            dp[sN] = includeN;
            dp[sNr] = includeN;
        }

        int res = min(includeA, includeB);
        res = min(res, includeN);
        dp[s] = res;
        dp[sr] = res;
        return res;
    }
    else
    {
        return INT_MAX - 1;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int res = tower(h, 0, k, k);
        if (res > h.size())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << res << endl;
        }
    }

    return 0;
}