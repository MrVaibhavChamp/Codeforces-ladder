#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll sum = 4*(sqrt((a * b) / c) + sqrt((b * c) / a) + sqrt((c * a) / b));
    cout<<sum;
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
