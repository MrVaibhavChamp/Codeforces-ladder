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
    int max_sum = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int curr_sum = 0;
            for (int k = 0; k < n; k++)
            {
                if (k >= i && k <= j)
                {
                    curr_sum += 1 - v[k];
                }
                else
                {
                    curr_sum += v[k];
                }
            }
            max_sum = max(max_sum, curr_sum);
        }
    }
    cout << max_sum;
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
