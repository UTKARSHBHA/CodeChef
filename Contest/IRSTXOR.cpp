#include <bits/stdc++.h>
using namespace std;
#define ll long long

void itob(ll c, ll n, int arr[])
{
    ll i = 0;
    while (c > 0)
    {
        arr[i++] = c % 2;
        c /= 2;
    }
    reverse(arr, arr + n);
}

ll btoi(ll n, int arr[])
{
    ll res = 0;
    ll base = 1;
    for (ll i = n - 1; i >= 0; i--)
    {
        res += base * arr[i];
        base *= 2;
    }
    return res;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll c;
        cin >> c;
        ll n = log2(c) + 1;
        // cout << "n " << n << endl;
        int arrc[n];
        itob(c, n, arrc);

        int arra[n], arrb[n];
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (arrc[i] == 0)
            {
                arra[i] = 1;
                arrb[i] = 1;
            }
            else
            {
                if (f == 0)
                {
                    arra[i] = 1;
                    arrb[i] = 0;
                    f = 1;
                }
                else
                {
                    arra[i] = 0;
                    arrb[i] = 1;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arrb[i] << " ";
        // }
        ll a = btoi(n, arra);

        ll b = btoi(n, arrb);
        cout << a * b << endl;
    }

    return 0;
}

// ll limit(ll c)
// {
//     ll res = log2(c);
//     return res;
// }

// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll c;
//         cin >> c;
//         ll lim = limit(c) + 1;
//         ll ran = pow(2, lim) - 1;
//         // cout << lim << endl;
//         ll maxx = -1;
//         ll a = pow(2, lim - 1);
//         for (a; a <= ran; a++)
//         {
//             ll b = c ^ a;
//             if (b <= ran)
//             {
//                 maxx = max(maxx, a * b);
//             }
//         }
//         cout << maxx << endl;
//     }

//     return 0;
// }