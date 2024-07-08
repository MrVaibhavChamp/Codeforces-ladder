#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    vector<vector<int>> v(n, vector<int>(m));
    int mod1, mod2;
    bool not_possible = false;
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i][j] = x;
            if (!(i + j))
            {
                mod1 = x % d;
            }
            else
            {
                mod2 = x % d;
                if (mod2 != mod1)
                {
                    not_possible = true;
                }
            }
        }
    }
    if (not_possible)
    {
        cout << "-1";
    }
    else
    {
        int min_moves = INF;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int curr = v[i][j];
                int curr_moves = 0;
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < m; l++)
                    {
                        curr_moves += abs(v[k][l] - curr) / d;
                    }
                }
                min_moves = min(curr_moves, min_moves);
            }
        }
        cout << min_moves;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    // cin>>test;

    while (test--)
    {
        solve();
    }

    return 0;
}
