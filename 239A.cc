#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    ll y, k, n;
    cin >> y >> k >> n;
    ll x;
    if (y >= n)
    {
        cout << "-1";
        return;
    }
    stack<int> stk;
    x = n - (n % k) - y;
    while (x > 0)
    {
        stk.push(x);
        x -= k;
    }
    if(stk.size() == 0){
        cout<<"-1";
    }
    while (!stk.empty()) {
        cout << stk.top() <<" ";
        stk.pop();
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
