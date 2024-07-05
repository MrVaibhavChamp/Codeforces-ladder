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
    vector<int> x(n);
    vector<int> y(n);
    int left_sum = 0;
    int right_sum = 0;
    int even_odd_pair = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x[i] = a;
        y[i] = b;
        left_sum += a;
        right_sum += b;
        if ((a % 2 == 0 && b % 2 != 0) || (b % 2 == 0 && a % 2 != 0))
        {
            even_odd_pair++;
        }
    }
    if ((left_sum + right_sum) % 2 != 0)
    {
        cout << "-1";
        return;
    }
    if (left_sum % 2 == 0 && right_sum % 2 == 0)
    {
        cout << "0";
        return;
    }

    if (left_sum % 2 != 0 && right_sum % 2 != 0 && even_odd_pair > 0)
    {
        cout << "1";
        return;
    }
    else
    {
        cout<<"-1";
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
