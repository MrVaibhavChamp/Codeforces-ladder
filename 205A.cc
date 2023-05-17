#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    ll n;
    ll a1;
    cin >> n >> a1;
    ll min(a1);
    ll woah = 1;
    ll index = 1;
    for (ll i = 1; i < n; i++)
    {
        ll current;
        cin >> current;

        if (current < min)
        {
            min = current;
            index = i + 1;
            woah = 1;
        }
        else if (current == min)
        {
            woah++;
        }
    }
    if (woah == 1)
    {
        cout << index;
    }
    else
    {
        cout << "Still Rozdil";
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