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
    multiset<pair<int, int>> S;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> P;
        cin >> P.first >> P.second;
        S.insert(P);
    }
    // cout << endl;
    int count = 0;
    for (auto current_pair : S)
    {
        pair<int, int> P = current_pair;
        int left = 0, right = 0, up = 0, down = 0;
        // cout << P.first << " " << P.second << endl;
        for (auto new_pair : S)
        {
            pair<int, int> P1 = new_pair;
            if (new_pair != P)
            {
                // cout << new_pair.first << " " << new_pair.second<<endl;
                if (P1.first == P.first)
                {
                    if (P1.second > (P.second))
                    {
                        right++;
                    }
                    if (P1.second < (P.second))
                    {
                        left++;
                    }
                }
                else if (P1.second == P.second)
                {
                    if (P1.first > (P.first))
                    {
                        up++;
                    }
                    if (P1.first < (P.first))
                    {
                        down++;
                    }
                }
                else
                {
                    continue;
                }
            }
            else if (P1 == P)
            {
                continue;
            }
        }
        // cout<<endl<<endl;
        if (up > 0 && down > 0 && left > 0 && right > 0)
        {
            count++;
        }
    }
    cout << count << endl;
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
