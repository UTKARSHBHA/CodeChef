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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count[64] = {0};
        for (int i = 0; i < n; i++)
        {
            int mask = 1;
            int j = 0;
            for (int j = 0; j < 64; j++)
            {
                // cout << arr[i] << " bug " << endl;
                if (arr[i] & mask)
                {
                    count[j]++;
                }
                mask = mask << 1;
            }
        }
        int res = 0;
        for (int i = 0; i < 64; i++)
        {
            // cout << count[i] << " ";
            res += count[i] / k;
            if (count[i] % k)
            {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}