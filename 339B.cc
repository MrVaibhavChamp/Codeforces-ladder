#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll min_time = 0;
    ll prev(1);
    ll current;
    for (ll i = 0; i < m; i++)
    {
        cin >> current;
        if (current >= prev)
        {
            min_time += (current - prev);
        }
        else if (current < prev)
        {
            min_time += (n - prev + 1);
            min_time += (current - 1);
        }
        prev = current;
    }
    cout<<min_time;
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