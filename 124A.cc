#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    if (n-a > b+1)
    {
        cout<<b+1<<endl;
    }
    if (n-a <= b+1)
    {
        cout<<n-a<<endl;
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
