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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    sum -= 1;
    int possible_comb_of_fingers = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (((sum + i) % (n + 1)) != 0)
        {
            possible_comb_of_fingers++;
            continue;
        }
    }
    cout << possible_comb_of_fingers;
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
