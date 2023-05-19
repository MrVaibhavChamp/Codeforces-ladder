#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b;
    int max = 0;
    int max_count;
    for (int i = 0; i < m; i++)
    {
        cin>>b;
        for (int j = 0; j < n; j++)
        {
            if ((b % a[j]) == 0)
            {
                int x = b / a[j];
                if (x > max)
                {
                    max = x;
                    max_count = 1;
                }
                else if (x == max)
                {
                    max_count++;
                }
            }
        }
    }
    cout << max_count;
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