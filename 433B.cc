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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> raw_pre_sum(n);
    raw_pre_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        raw_pre_sum[i] = raw_pre_sum[i - 1] + v[i];
    }
    sort(v.begin(), v.end());
    vector<ll> sorted_pre_sum(n);
    sorted_pre_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        sorted_pre_sum[i] = sorted_pre_sum[i - 1] + v[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int tp, l, r;
        cin >> tp >> l >> r;
        if (tp == 1)
        {
            if (l > 1)
            {
                cout << raw_pre_sum[r-1] - raw_pre_sum[l - 2] << endl;
            }
            else
            {
                cout << raw_pre_sum[r-1] << endl;
            }
        }
        else
        {
            if (l > 1)
            {
                cout << sorted_pre_sum[r-1] - sorted_pre_sum[l - 2] << endl;
            }
            else
            {
                cout << sorted_pre_sum[r-1] << endl;
            }
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
