#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n;
    cin >> n;
    ll b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n);
    ll max_diff = b[n - 1] - b[0];
    ll count = 0;
    if (b[0] != b[n - 1])
    {
        ll count_from_first = 0;
        ll count_from_last = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[0] == b[i])
            {
                count_from_first++;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (b[n - 1] == b[i])
            {
                count_from_last++;
            }
        }
        count = (ll)count_from_first * count_from_last;
    }
    else{
        count = (ll)n*(n-1) / 2;
    }
    cout << max_diff << " " << count;
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
