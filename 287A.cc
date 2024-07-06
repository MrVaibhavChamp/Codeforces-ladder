#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    vector<string> input(4);
    for (int i = 0; i < 4; i++)
    {
        cin>>input[i];
    }
    vector<vector<int>> v(4, vector<int> (4));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (input[i][j] == '.')
            {
                v[i][j] = 0;
            }
            else
            {
                v[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = v[i][j] + v[i+1][j] + v[i][j+1] + v[i+1][j+1];
            if (sum == 0 || sum == 1 || sum==3 || sum==4){
                cout<<"YES";
                return;
            }
        }
    }
    cout<<"NO";
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
