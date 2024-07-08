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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans(n);
    set<int> st;
    int count_unique = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.insert(v[i]).second)
        {
            count_unique++;
            ans[i] = count_unique;
        }
        ans[i] = count_unique;
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        // vector<int> vc;
        // vc = v;
        // sort(vc.begin()+x-1, vc.end());
        // int ans = unique(vc.begin()+x-1, vc.end()) - (vc.begin()-1+x);
        // cout<<ans<<endl;

        // set<int> st;
        // for (int i = x-1; i < n; i++)
        // {
        //     st.insert(v[i]);
        // }
        // cout<<st.size()<<endl;

        cout<<ans[x-1]<<endl;
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
