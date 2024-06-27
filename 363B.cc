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
    vector<int> h;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        h.push_back(x);
    }
    int left_idx = 0, right_idx = k - 1;
    int curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_sum += h[i];
    }
    // cout<<"Curr sum: "<<curr_sum<<endl;
    int min_sum = curr_sum;
    int min_sum_idx = 0;
    for (int i = 0; i < n - k; i++)
    {
        curr_sum += h[right_idx+1];
        curr_sum -= h[left_idx];
        // cout<<"Current sum is: "<<curr_sum<<" current index is: "<<i+1<<endl;
        if (curr_sum < min_sum)
        {
            min_sum = curr_sum;
            min_sum_idx = left_idx+1;
            // cout<<"Min sum is: "<<min_sum<<" and index: "<<min_sum_idx+1<<endl;
        }
        right_idx++;
        left_idx++;
    }
    cout << min_sum_idx+1;
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
