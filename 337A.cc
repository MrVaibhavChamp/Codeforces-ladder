#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, m;
    cin >> n >> m;
    int f[m];
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int diff[m - n + 1];
    for (int i = 0; i < m - n + 1; i++)
    {
        diff[i] = f[i + n - 1] - f[i];
    }
    cout << *min_element(diff, diff +( m - n + 1));
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
