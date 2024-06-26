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
    int count_100;
    int count_200;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 100)
        {
            count_100++;
        }
        if (x == 200)
        {
            count_200++;
        }
    }
    ll sum = count_100 * 100 + count_200 * 200;
    // cout<<sum;
    if (count_100 == 0 && count_200 % 2 != 0)
    {
        cout << "NO";
        return;
    }
    if (sum % 200 == 0)
    {
        cout << "YES";
        return;
    }
    cout << "NO";
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
