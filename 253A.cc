#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n_b, m_g;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n_b >> m_g;
    if (n_b > m_g)
    {
        for (int i = 0; i < m_g; i++)
        {
            cout<<"BG";
            n_b--;
        }
        for (int i = 0; i < n_b; i++)
        {
            cout<<"B";
        }        
    }
    else
    {
        for (int i = 0; i < n_b; i++)
        {
            cout<<"GB";
            m_g--;
        }
        for (int i = 0; i < m_g; i++)
        {
            cout<<"G";
        }        
    }
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