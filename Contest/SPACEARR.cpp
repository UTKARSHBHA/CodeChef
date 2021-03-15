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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int diff = 0;
        string winner;
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > i + 1)
            {
                winner = "Second";
                f = 1;
                break;
            }
            diff += i + 1 - arr[i];
        }
        if (f == 0)
        {
            if (diff % 2 == 0)
            {
                winner = "Second";
            }
            else
            {
                winner = "First";
            }
        }
        cout << winner << endl;
    }

    return 0;
}