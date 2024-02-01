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
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && s[i] != 'A' && s[i] != 'e' && s[i] != 'E' && s[i] != 'i' && s[i] != 'I' && s[i] != 'o' && s[i] != 'O' && s[i] != 'u' && s[i] != 'U' && s[i] != 'y' && s[i] != 'Y')
        {
            cout << ".";
            if (isupper(s[i]))
            {
                char ch = tolower(s[i]);
                cout << ch;
            }
            else
            {
                cout << s[i];
            }
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

// string s;
// cin >> s;
// string result;
// for (int i = 0; i < s.size(); i++)
// {
//     char ch = tolower(s[i]);
//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
//     {
//         continue;
//     }
//     else
//     {
//         cout << "." << ch;
//     }
// }
// cout << result;