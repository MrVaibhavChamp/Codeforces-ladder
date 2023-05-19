#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    string s, t;
    cin >> s >> t;
    bool exist(true);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[s.size() - i - 1])
        {
            exist = false;
        }
    }
    if (exist==true)
    {
        cout<<"YES";
    }
    if (exist==false)
    {
        cout<<"NO";
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