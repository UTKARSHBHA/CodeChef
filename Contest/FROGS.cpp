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
        int w[n];
        int l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        int arr[n + 1] = {-1};
        for (int i = 0; i < n; i++)
        {
            arr[w[i]] = i;
        }
        int res = 0;
        for (int i = 1; i < n + 1; i++)
        {
            int ind = arr[i];
            while (arr[i] <= arr[i - 1])
            {
                res++;
                arr[i] += l[ind];
            }
        }
        cout << res << endl;
    }

    return 0;
}