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
    // multiset<int> positive;
    // multiset<int> non_positive;
    ll moves = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     if (x > 0)
    //     {
    //         positive.insert(x);
    //     }
    //     else
    //     {
    //         non_positive.insert(x);
    //     }
    // }
    // int current = 1;
    // multiset<int>::iterator itrn = non_positive.begin();
    // for (auto itrp = positive.begin(); itrp != positive.end(); itrp++)
    // {
    //     while (current != *itrp)
    //     {
    //         moves += current - *itrn;
    //         // cout << moves<<endl;
    //         if (itrn != non_positive.end())
    //         {
    //             itrn++;
    //         }
    //         current++;
    //     }
    //     current++;
    //     if (itrn == non_positive.end())
    //     {
    //         break;
    //     }
    // }
    // if (itrn != non_positive.end())
    // {
    //     while (itrn != non_positive.end())
    //     {
    //         moves += current - *itrn;
    //         current++;
    //         itrn++;
    //         // cout << moves<<endl;
    //     }
    // }
    // int prev = *positive.begin();
    // for (auto itrp = positive.begin(); itrp != positive.end(); itrp++)
    // {

    // }
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        moves+=abs(i-v[i-1]);
    }
    
    cout << moves;
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
