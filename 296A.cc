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
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());

    int max_eq_count = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_eq_cnt = 1;
        while (vec[i] == vec[i + 1] && i < n)
        {
            curr_eq_cnt++;
            i++;
        }
        if (max_eq_count < curr_eq_cnt)
        {
            max_eq_count = curr_eq_cnt;
        }
        // cout<<"Max equal count: "<<max_eq_count<<" i value: "<<i<<endl;
        // i--;
    }
    if (n % 2 == 0 && max_eq_count <= n / 2)
    {
        cout << "YES";
    }
    else if (n % 2 != 0 && max_eq_count <= (n + 1) / 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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
