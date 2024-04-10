#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int max_sum = 0, min_sum = 0;
    
    sort(a, a + m);
    for (int i = 0; i < n;)
    {
        for (int j = 0; j < m; j++)
        {
            while (a[j] != 0 && i < n)
            {
                min_sum += a[j];
                a[j]--;
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        sort(b, b+m, greater<int>());
        max_sum += b[0];
        b[0]--;
    }
    

    // sort(b, b + m, greater<int>());
    // for (int i = 0; i < n;)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (j < m - 1)
    //         {
    //             while (b[j] >= b[j + 1] && b[j] > 0 && i < n)
    //             {
    //                 max_sum += b[j];
    //                 b[j]--;
    //                 i++;
    //                 cout << "first loop problem\\";
    //             }
    //         }
    //         cout << "between loops\\";
    //         if (j == m - 1 && i < n && a[j] > 0)
    //         {
    //             max_sum += b[j];
    //             b[j]--;
    //             i++;
    //             cout << "second loop problem\\";
    //             if (i < n)
    //             {
    //                 j = 0;
    //             }
    //         }
    //         cout << "after second loop\\";
    //     }
    //     cout << "i wala loop\\";
    // }
    cout << max_sum << " " << min_sum;
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
