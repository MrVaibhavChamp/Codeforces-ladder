#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int flag = 1;
    for (int i = k; i < n; i++)
    {
        if (a[k - 1] != a[i])
        {
            flag = -1;
            cout << flag;
            return;
        }
    }
    for (int i = k - 1; i >= 0; i--)
    {
        if(a[k - 1] != a[i]){
            count = i + 1;
            break;
        }
    }
    cout<<count;
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