#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n;
    cin>>n;
    ll num = 5000001;
    cout<<num;
    for (int i = 0; i < n-1; i++)
    {
        num++;
        cout<<" "<<num;
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
