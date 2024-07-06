#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

bool comp(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first == b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin>>x>>y;
        v[i] = {x, y};
    }
    sort(v.begin(), v.end(), comp);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]==v[k-1])
        {
            count++;
        }
    }
    cout<<count;
    

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
