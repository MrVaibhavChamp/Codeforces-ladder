#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
    {
        cout << "NO";
        return;
    }

    char diff1_1, diff1_2, diff2_1, diff2_2;
    int count_diff = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            count_diff++;
            if (count_diff == 1)
            {
                diff1_1 = s1[i];
                diff1_2 = s2[i];
            }
            else if (count_diff == 2)
            {
                diff2_1 = s1[i];
                diff2_2 = s2[i];
            }
            else if (count_diff > 2)
            {
                cout << "NO";
                return;
            }
        }
    }

    if ((diff1_1 == diff2_2) && (diff1_2 == diff2_1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
