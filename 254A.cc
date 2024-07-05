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
    vector<int> a(5001, 0);
    vector<pair<int, int>> ans;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        if (a[x] == 0)
        {
            a[x] += i + 1;
        }
        else
        {
            ans.push_back({i + 1, a[x]});
            a[x] = 0;
        }
    }

    for (int i = 0; i < 5001; i++)
    {
        if(a[i]!=0){
            cout<<"-1";
            return;
        }
    }

    // if (accumulate(a.begin(), a.end(), 0) > 0)
    // {
    //     cout << "-1";
    //     return;
    // }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    // cin>>test;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    while (test--)
    {
        solve();
    }

    return 0;
}
