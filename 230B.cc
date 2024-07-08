#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;
const int prms = 1000001;

set<ll> prime_squares()
{
    static bool arr[prms];
    for (int i = 2; i * i < prms; i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < prms; j += i)
            {
                arr[j] = true;
            }
        }
    }
    set<ll> res;
    for (int i = 2; i < prms; i++)
    {
        if (!arr[i])
        {
            res.insert((ll)i * i);
        }
    }
    return res;
}

void solve()
{
    set<ll> st;
    st = prime_squares();
    int n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     ll x;
    //     cin >> x;
    //     if (x == 1 || x == 2 || x == 3)
    //     {
    //         cout << "NO" << endl;
    //         continue;
    //     }
    //     if (x == 4)
    //     {
    //         cout << "YES" << endl;
    //         continue;
    //     }
    //     float rooty = sqrt(x);
    //     if (floor(rooty) != rooty)
    //     {
    //         cout << "NO" << endl;
    //         continue;
    //     }
    //     if (int(rooty) % 2 == 0 && rooty > 2)
    //     {
    //         cout << "NO" << endl;
    //         continue;
    //     }
    //     int prime_flag = 1;
    //     for (int i = 3; i <= int(sqrt(rooty)); i += 2)
    //     {
    //         if (int(rooty) % i == 0)
    //         {
    //             prime_flag = 0;
    //             break;
    //         }
    //     }
    //     if (prime_flag == 1)
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (st.find(x) != st.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
