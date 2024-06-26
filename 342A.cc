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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_6 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5 || a[i] == 7)
        {
            cout << "-1";
            return;
        }
        if (a[i] == 1)
        {
            count_1++;
        }
        if (a[i] == 2)
        {
            count_2++;
        }
        if (a[i] == 3)
        {
            count_3++;
        }
        if (a[i] == 4)
        {
            count_4++;
        }
        if (a[i] == 6)
        {
            count_6++;
        }
    }
    int count_124 = 0;
    int count_126 = 0;
    int count_136 = 0;

    count_136 = count_3;
    count_1 -= count_136;
    count_6 -= count_136;
    count_3 -= count_136;
    // cout << count_136 << endl;
    count_124 = count_4;
    count_1 -= count_124;
    count_2 -= count_124;
    count_4 -= count_124;
    // cout << count_124 << endl;
    count_126 = count_6;
    count_1 -= count_126;
    count_2 -= count_126;
    count_6 -= count_126;
    // cout << count_126 << endl;
    if (count_1 != 0 || count_2 != 0 || count_6 != 0 || count_136 < 0 || count_124 < 0 || count_126 < 0)
    {
        cout << "-1";
        return;
    }
    for (int i = 0; i < count_124; i++)
    {
        cout << "1 2 4" << endl;
    }
    for (int i = 0; i < count_126; i++)
    {
        cout << "1 2 6" << endl;
    }
    for (int i = 0; i < count_136; i++)
    {
        cout << "1 3 6" << endl;
    }
}

// Can also greedily finish the counts of 3, increase count of 136 and similarly for others...

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