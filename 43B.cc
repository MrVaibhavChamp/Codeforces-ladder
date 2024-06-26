#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    vector<int> vec(52);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != ' ' && isupper(s1[i]))
        {
            vec[s1[i] - 'A']++;
        }
        if (s1[i] != ' ' && islower(s1[i]))
        {
            vec[26 + s1[i] - 'a']++;
        }
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != ' ' && isupper(s2[i]))
        {
            if (vec[s2[i] - 'A'] <= 0)
            {
                cout << "NO";
                return;
            }
            else
            {
                vec[s2[i] - 'A']--;
            }
        }
        if (s2[i] != ' ' && islower(s2[i]))
        {
            if (vec[26 + s2[i] - 'a'] <= 0)
            {
                cout << "NO";
                return;
            }
            else
            {
                vec[26 + s2[i] - 'a']--;
            }
        }
    }
    cout << "YES";
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
