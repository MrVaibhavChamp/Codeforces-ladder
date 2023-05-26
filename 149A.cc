#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int k;
    cin>>k;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin>>a[i];
    }
    int ans(0);
    int count(0);
    sort(a, a+12);
    for (int i = 12 - 1; i >= 0; i--)
    {
        if (ans>=k)
        {
            break;
        }
        ans+=a[i];
        count++;
    }
    if (ans<k)
    {
        cout<<"-1";
    }
    if (ans>=k)
    {
        cout<<count;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    // cin>>test;

    while(test--)
    {
        solve();
    }

    return 0;
}
