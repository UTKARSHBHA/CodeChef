#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, h, x;
    cin >> n >> h >> x;
    int arr[n];
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxx = max(maxx, arr[i]);
    }
    if (h > (maxx + x))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}