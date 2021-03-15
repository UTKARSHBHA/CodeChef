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
        int f = 0;
        int res = 0;
        int arr[n];
        int kk = 0;
        for (int i = 0; i < n; i++)
        {
            arr[kk++] = (i % (k)) + 1;
        }

        

        for (int i = 0; i < kk; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}