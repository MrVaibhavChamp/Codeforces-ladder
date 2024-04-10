#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int s, n;
    vector<pair<int, int>> v(n);
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        int frst, scnd;
        cin >> frst >> scnd;
        v.push_back(make_pair(frst, scnd));
    }
    sort(v.begin(), v.end());
    for (auto &&i : v)
    {
        if (s <= i.first)
        {
            cout<<"NO";
            return;
        }
        s += i.second;
    }
    cout<<"YES";
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