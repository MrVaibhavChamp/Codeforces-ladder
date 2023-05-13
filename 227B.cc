#include <bits/stdc++.h>
using namespace std;
int INF = 1e9;

int main()
{
    // int n;   // Exceeds time limit!
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int m;
    // cin >> m;
    // int b[m];
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> b[i];
    // }
    // int vasya = 0;
    // int petya = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     int x = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         vasya++;
    //         x++;
    //         if (a[j] == b[i])
    //         {
    //             break;
    //         }
    //     }
    //     // for (int j = n - 1; j >= 0; j--)
    //     // {
    //     //     petya++;
    //     //     if (a[j]==b[i])
    //     //     {
    //     //         break;
    //     //     }
    //     // }
    //     petya += (n + 1 - x);
    // }
    // cout << vasya << " " << petya;

    int n, a, index[100001];  // Storing indexes of inserted elements in an array and then taking them easily in O(1) to be more efficient and be O(m+n), not O(m*n)
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        index[a] = i;
    }

    int m, b;
    cin >> m;
    long long Vasya = 0;
    long long Petya = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b;
        Vasya += index[b];
        Petya += (n + 1 - index[b]);
    }
    cout<<Vasya<<" "<<Petya;
    return 0;
}