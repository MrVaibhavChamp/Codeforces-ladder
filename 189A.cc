#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int max_count = -INF;
    int curr_pieces;
    for (int i = 0; i*a <= n; i++)
    {
        for (int j = 0; i*a+j*b <= n; j++)
        {
            if ((n - (i * a + j * b)) % c == 0)
            {
                curr_pieces = (i + j + ((n - (i * a + j * b)) / c));
                if (curr_pieces > max_count)
                {
                    max_count = curr_pieces;
                }
            }
        }
    }

    cout << max_count;
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
