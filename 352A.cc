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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5)
        {
            x = n - i;
            break;
        }
    }
    int fives = x / 9;
    int zeros = n - x;
    if (fives == 0 && zeros > 0)
    {
        cout << "0";
        return;
    }
    if (zeros==0)
    {
        cout<<"-1";
        return;
    }
    
    for (int i = 0; i < fives * 9; i++)
    {
        cout << "5";
    }
    for (int i = 0; i < zeros; i++)
    {
        cout << "0";
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
