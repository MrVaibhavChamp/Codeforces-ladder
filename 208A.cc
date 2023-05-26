#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    string s;
    cin >> s;
    int flag = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!flag)
            {
                cout<<" ";
            }
            continue;
        }
        else
        {
            flag = 0;
            cout<<s[i];
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

// #include <iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     bool sp = true;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
//         {
//             i += 2;
//             if (!sp)
//                 cout << " ";
//             continue;
//         }
//         else
//         {
//             sp = false;
//             cout << s[i];
//         }
//     }
//     cout << endl;
//     return 0;
// }