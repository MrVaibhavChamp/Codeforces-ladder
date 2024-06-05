#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    int a[] = {0, 1, 2, 3, 4};
    int max_sum = 0;
    for (int i = 0; i < 120; i++)
    {
        int sum = arr[a[0]][a[1]] + arr[a[1]][a[0]] + arr[a[1]][a[2]] + arr[a[2]][a[1]] + 2 * (arr[a[2]][a[3]] + arr[a[3]][a[2]] + arr[a[3]][a[4]] + arr[a[4]][a[3]]);
        if (sum >= max_sum)
        {
            max_sum = sum;
        }
        next_permutation(a, a + 5);
    }
    cout << max_sum;
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
