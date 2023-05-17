#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, a1;
    cin >> n >> a1;
    int prev(a1);

    int min_diff = INF;
    int index1;
    int index2;
    int current;
    for (int i = 1; i < n; i++)
    {
        cin >> current;
        int diff = abs(current - prev);
        if (diff < min_diff)
        {
            min_diff = diff;
            index1 = i;
            index2 = i + 1;
        }
        prev = current;
    }
    int new_diff = abs(current - a1);
    if (new_diff < min_diff)
    {
        index1 = n;
        index2 = 1;
    }
    
        cout<<index1<<" "<<index2;
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