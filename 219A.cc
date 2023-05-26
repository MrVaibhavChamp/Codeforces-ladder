#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int k, count = 0;
    cin >> k;
    string s;
    cin >> s;
    char ch;
    int l = s.size();
    sort(s.begin(), s.begin() + l);
    for (int i = 0; i < l; i++)
    {
        if (i % k == 0)
        {
            ch = s[i];
        }
        if (s[i] == ch)
        {
            count++;
        }
    }
    if (l==count && count%k==0)
    {
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < l; j+=k)
            {
                cout<<s[j];
            }
        }
    }
    else
    {
        cout<<"-1";
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