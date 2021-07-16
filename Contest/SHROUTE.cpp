#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int brr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> brr[i];
        }
        vector<int> one(n, -1);
        vector<int> two(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                one[i] = 0;
            }
            else if (arr[i] == 2)
            {
                two[i] = 0;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (one[i] == 0)
            {
                continue;
            }
            if (one[i - 1] >= 0)
            {
                one[i] = one[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (two[i] == 0)
            {
                continue;
            }
            if (two[i + 1] >= 0)
            {
                two[i] = two[i + 1] + 1;
            }
        }
        one[0] = 0;
        two[0] = 0;
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            if (one[i] == -1 && two[i] == -1)
            {
                res[i] = -1;
            }
            else if (one[i] == -1)
            {
                res[i] = two[i];
            }
            else if (two[i] == -1)
            {
                res[i] = one[i];
            }
            else
            {
                res[i] = min(one[i], two[i]);
            }
        }
        for (int i = 0; i < m; i++)
        {
            cout << res[brr[i] - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}