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
    vector<pair<int, int>> vec;
    int idx = -1;
    int lowest_first = INF;
    int biggest_second = -INF;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < lowest_first){
            lowest_first = x;
            biggest_second = y;
            idx = i;
        }
        else if(lowest_first == x && y>biggest_second){
            biggest_second = y;
            idx = i;
        }
        vec.push_back({x, y});
    }

    // cout<<"Index: "<<idx+1<<endl;
    // cout<<"Lowest first: "<<lowest_first<<endl;
    // cout<<"Biggest second: "<<biggest_second<<endl;\

    for (int i = 0; i < n; i++)
    {
        if(vec[i].second > biggest_second){
            cout<<"-1";
            return;
        }
    }
    cout<<idx+1;
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
