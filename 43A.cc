#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n;
    cin>>n;
    int team_1_score(0);
    int team_2_score(0);
    string team_1;
    string team_2;
    cin>>team_1;
    team_1_score++;
    for (int i = 0; i < n-1; i++)
    {
        string x;
        cin>>x;
        if (x==team_1)
        {
            team_1_score++;
        }
        if (x!=team_1)
        {
            team_2 = x;
            team_2_score++;
        }
    }
    if (team_1_score>team_2_score)
    {
        cout<<team_1;
    }
    if (team_1_score<team_2_score)
    {
        cout<<team_2;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    // cin>>test;

    while(test--)
    {
        solve();
    }

    return 0;
}