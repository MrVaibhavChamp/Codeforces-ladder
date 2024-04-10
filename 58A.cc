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
    int counter_h = 0, counter_e = 0, counter_l1 = 0, counter_l2 = 0, counter_o = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h')
        {
            counter_h = 1;
            continue;
        }
        if (s[i] == 'e' && counter_h == 1)
        {
            counter_e = 1;
            continue;
        }
        if (s[i] == 'l' && counter_h == 1 && counter_e == 1 && counter_l1 == 0)
        {
            counter_l1 = 1;
            continue;
        }
        if (s[i] == 'l' && counter_h == 1 && counter_e == 1 && counter_l1 == 1)
        {
            counter_l2 = 1;
            continue;
        }
        if (s[i] == 'o' && counter_h == 1 && counter_e == 1 && counter_l1 == 1 && counter_l2 == 1)
        {
            counter_o = 1;
            continue;
        }
    }
    if (counter_h != 1 || counter_e != 1 || counter_l1 != 1 || counter_l2 != 1 || counter_o != 1)
    {
        cout << "NO";
        return;
    }
    cout << "YES";
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
