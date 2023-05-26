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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            b.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end());
    int size;
    if (b.size() < m)
    {
        size = b.size();
    }
    else if (b.size() > m)
    {
        size = m;
    }
    int earning;
    for (int i = 0; i < size; i++)
    {
        earning+=(-(b[i]));
    }
    cout<<earning;
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


// OR 
// int n, m, a[100];
//     cin >> n >> m;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);

//     int s(0);
//     for (int i = 0; i < m; ++i)
//     {
//         if (a[i] >= 0)
//         {
//             break;
//         }
//         s += a[i];
//     }
//     cout << -s << endl;
//     return 0;
