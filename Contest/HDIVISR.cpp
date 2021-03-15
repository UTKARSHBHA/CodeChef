#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int left = 1, right = 10;
    // int res = 1;
    // while (left <= right)
    // {
    //     int mid = left + (right - left) / 2;
    //     int x = n % mid;
    //     if (x == 0)
    //     {
    //         res = mid;
    //         left = mid + 1;
    //     }
    //     else if (mid + x <= right)
    //     {
    //         // res = mid+x;
    //         left = res + 1;
    //     }
    //     else if (mid + x > right)
    //     {
    //         right = mid - 1;
    //     }
    // }
    // cout << res << endl;

    // int res = n;
    int m = 10;
    while (m > 0)
    {
        if (n % m == 0)
        {
            break;
        }
        m--;
    }
    cout << m << endl;

    return 0;
}