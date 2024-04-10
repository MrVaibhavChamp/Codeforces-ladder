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
    map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x].push_back(i);
    }

    vector<pair<int, int>> v;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        int k = it->first;

        if (m[k].size() == 1)
        {
            v.push_back({k, 0});
        }
        else
        {
            set<int> s;
            for (int i = 1; i < m[k].size(); i++)
            {
                s.insert(abs(m[k][i] - m[k][i - 1]));
            }
            if (s.size() == 1)
            {
                v.push_back({k, *s.begin()});
            }
        }
    }
    cout << v.size() << endl;
    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second<<endl;
    }

    // My solution: Direction was right but couldn't implement completely

    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << endl;
    //     for (auto iter : it->second)
    //     {
    //         cout << iter << "  ";
    //     }
    //     cout << endl;
    // }
    // int count = 0;
    // for (auto it = m.begin(); it != m.end(); it++)
    // {
    //     if (it->second.size() == 1)
    //     {
    //         count++;
    //     }
    //     if (it->second.size() > 1)
    //     {
    //         int counter = 0;
    //         int diff = it->second[1] - it->second[0];
    //         int prev = it->second[0];
    //         for (auto iter : it->second)
    //         {
    //             if (iter == it->second[0])
    //             {
    //                 continue;
    //             }
    //             int curr = iter;
    //             int curr_diff = curr - prev;
    //             if (curr_diff != diff)
    //             {
    //                 counter = 1;
    //             }
    //         }
    //         if (counter == 0)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout << count;
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
