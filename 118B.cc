// #include <bits/stdc++.h>  // Strange the first one wasn't accepted when both git the same answers!
// using namespace std;
// #define ll long long
// #define endl '\n'
// #define mod 1000000007
// int INF = 1e9;

// void solve()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
//         int j = 0;
//         while (j < (2 * (n - i)))
//         {
//             cout << " ";
//             j++;
//         }
//         int k = 0;
//         while (k <= i)
//         {
//             cout << k << " ";
//             k++;
//         }
//         k--;
//         while (k > 0)
//         {
//             cout << k - 1 << " ";
//             k--;
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int j = 0;
//         while (j < 2 * i)
//         {
//             cout << " ";
//             j++;
//         }
//         int k = 0;
//         while (k <= n - i)
//         {
//             cout << k << " ";
//             k++;
//         }
//         k--;
//         while (k>0)
//         {
//             cout<<k-1<<" ";
//             k--;
//         }
//         cout << endl;
//     }
// }

// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll test = 1;
//     // cin>>test;

//     while (test--)
//     {
//         solve();
//     }

//     return 0;
// }


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
    return 0;
}