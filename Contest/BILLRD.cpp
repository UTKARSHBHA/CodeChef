#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, x, y;
        cin >> n >> k >> x >> y;
        ll upperx, lowerx, leftx, rightx;
        ll uppery, lowery, lefty, righty;
        ll resx, resy;
        if (x == y)
        {
            cout << n << " " << n << endl;
        }
        else
        {
            if (x < y)
            {
                uppery = n;
                upperx = x + (n - y);
                rightx = uppery;
                righty = upperx;
                leftx = 0;
                lefty = y - x;
                lowerx = lefty;
                lowery = leftx;

                if (k % 4 == 1)
                {
                    resx = upperx;
                    resy = uppery;
                }
                else if (k % 4 == 2)
                {
                    resx = rightx;
                    resy = righty;
                }
                else if (k % 4 == 3)
                {
                    resx = lowerx;
                    resy = lowery;
                }
                else
                {
                    resx = leftx;
                    resy = lefty;
                }
            }
            else if (x > y)
            {
                rightx = n;
                righty = y + (n - x);
                upperx = righty;
                uppery = rightx;
                lowerx = x - y;
                lowery = 0;
                leftx = lowery;
                lefty = lowerx;

                if (k % 4 == 1)
                {
                    resx = rightx;
                    resy = righty;
                }
                else if (k % 4 == 2)
                {
                    resx = upperx;
                    resy = uppery;
                }
                else if (k % 4 == 3)
                {
                    resx = leftx;
                    resy = lefty;
                }
                else
                {
                    resx = lowerx;
                    resy = lowery;
                }
            }
            cout << resx << " " << resy << endl;
        }
    }

    return 0;
}