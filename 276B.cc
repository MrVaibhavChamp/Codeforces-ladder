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
    int array[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        array[int(s[i] - 'a')] += 1;
    }
    int odd_ones_count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (array[i] % 2 != 0)
        {
            odd_ones_count++;
        }
    }
    if (odd_ones_count % 2 != 0 || odd_ones_count == 0)
    {
        cout << "First";
        return;
    }
    if (odd_ones_count % 2 == 0 && odd_ones_count > 0)
    {
        cout << "Second";
        return;
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
