#include <bits/stdc++.h>
using namespace std;

void countWinners(vector<string> &grid, int &wx, int &wo)
{

    for (int i = 0; i < 3; i++)
    {
        if (grid[i][0] != '_' && (grid[i][0] == grid[i][1] && grid[i][0] == grid[i][2]))
        {
            if (grid[i][0] == 'X')
            {
                wx++;
            }
            else if (grid[i][0] == 'O')
            {
                wo++;
            }
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (grid[0][j] != '_' && (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]))
        {
            if (grid[0][j] == 'X')
            {
                wx++;
            }
            else if (grid[0][j] == 'O')
            {
                wo++;
            }
        }
    }

    if (grid[0][0] != '_' && (grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2]))
    {
        if (grid[0][0] == 'X')
        {
            wx++;
        }
        else if (grid[0][0] == 'O')
        {
            wo++;
        }
    }
    if (grid[0][2] != '_' && (grid[0][2] == grid[1][1] && grid[0][2] == grid[2][0]))
    {
        if (grid[0][2] == 'X')
        {
            wx++;
        }
        else if (grid[0][2] == 'O')
        {
            wo++;
        }
    }
}

void countno(vector<string> &grid, int &nox, int &noo, int &nod)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 'X')
            {
                nox++;
            }
            else if (grid[i][j] == 'O')
            {
                noo++;
            }
            else
            {
                nod++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vector<string> grid;
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            grid.push_back(s);
        }
        int nox = 0, noo = 0, nod = 0, wx = 0, wo = 0;
        countno(grid, nox, noo, nod);
        countWinners(grid, wx, wo);

        if (wx > 0 && wo > 0)
        {
            cout << 3 << endl;
            continue;
        }

        if (nod % 2 == 0 || wx > 0)
        {
            if (!(nox == noo + 1))
            {
                cout << 3 << endl;
                continue;
            }
        }

        if (nod % 2 == 1 || wo > 0)
        {
            if (!(nox == noo))
            {
                cout << 3 << endl;
                continue;
            }
        }
        if (nod == 0 || wx > 0 || wo > 0)
        {
            cout << 1 << endl;
            continue;
        }
        cout << 2 << endl;
    }

    return 0;
}