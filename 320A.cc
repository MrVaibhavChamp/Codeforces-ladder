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
    // int n = s.size();
    // cout<<n;
    for (int i = 0; i < s.size();)
    {
        if (s[i] == '1')
        {
            if (s[i + 1] == '4')
            {
                if (s[i + 2] == '4')
                {
                    if (i + 3 >= s.size())
                    {
                        cout << "YES";
                        break;
                    }
                    i += 3;
                    continue;
                }
                else
                {
                    if (i + 2 >= s.size())
                    {
                        cout << "YES";
                        break;
                    }
                    i += 2;
                    continue;
                }
            }
            else
            {
                if (i + 1 >= s.size())
                {
                    cout << "YES";
                    break;
                }
                i += 1;
                continue;
            }
        }
        else
        {
            cout << "NO";
            break;
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
