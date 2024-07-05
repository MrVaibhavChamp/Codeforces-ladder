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
    int count_25 = 0, count_50 = 0, count_100 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 25)
        {
            count_25++;
        }
        if (x == 50)
        {
            count_50++;
            count_25--;
            if (count_25 < 0)
            {
                cout << "NO";
                return;
            }
        }
        if (x == 100)
        {
            count_100++;
            if (count_50)
            {
                count_50--;
                count_25--;
            }
            else
            {
                count_25 -= 3;
            }
            if (count_25 < 0 || count_50 < 0)
            {
                cout << "NO";
                return;
            }
        }
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
