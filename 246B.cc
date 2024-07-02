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
    // vector<int> vec;
    ll sum;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        // vec.push_back(x);
        sum+=x;

    }
    if(sum%n==0){
        cout<<n;
    }
    else{
        cout<<n-1;
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
