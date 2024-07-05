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
    string s, s1, s2;
    cin >> s;
    s1 = s.substr(0, n);
    s2 = s.substr(n, n);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int greater = 0;
    int smaller = 0;
    if (s1[0] > s2[0])
    {
        greater = 1;
    }
    else
    {
        smaller = 1;
    }
    if (greater)
    {
        for (int i = 0; i < n; i++)
        {
            if(s1[i] <= s2[i]){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
        return;
    }
    if (smaller)
    {
        for (int i = 0; i < n; i++)
        {
            if(s1[i] >= s2[i]){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
        return;
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
