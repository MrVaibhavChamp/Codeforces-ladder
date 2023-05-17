#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            cout << (2 * k - 1);
        }
        if (k > n / 2)
        {
            cout << ((k - n / 2) * 2);
        }
    }
    if (n % 2 != 0)
    {
        if (k <= (n / 2 + 1))
        {
            cout << (2 * k - 1);
        }
        else
        {
            cout << ((k - 1 - n / 2) * 2);
        }
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