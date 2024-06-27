#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    string s;
    cin >> s;
    int first = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            first = i;
            break;
        }
    }
    if (first != -1)
    {
        s.erase(s.begin() + first);
    }
    else
    {
        s.erase(s.begin());
    }
    cout << s;
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
