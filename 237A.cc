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
    int customer_present = 1;
    int prev_hr, prev_min;
    cin >> prev_hr >> prev_min;
    int max_load = 1;
    for (int i = 1; i < n; i++)
    {
        int curr_hr, curr_min;
        cin >> curr_hr >> curr_min;
        if (curr_hr == prev_hr && curr_min == prev_min)
        {
            customer_present++;
        }
        else
        {
            customer_present = 1;
        }
        prev_hr = curr_hr;
        prev_min = curr_min;
        max_load = max(max_load, customer_present);
    }

    cout<<max_load;
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
