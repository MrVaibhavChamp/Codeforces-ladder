#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    string s;
    cin>>s;
    int longest_streak=0;
    for (int i = 0; i < s.size(); i++)
    {
        int current_streak=0;
        int j=i;
        if (s[i]=='0')
        {
            while (s[j]=='0')
            {
                current_streak++;
                j++;
            }
            if (current_streak>longest_streak)
            {
                longest_streak = current_streak;
                i+=current_streak-1;
            }
        }
        else if (s[i]=='1')
        {
            while (s[j]=='1')
            {
                current_streak++;
                j++;
            }
            if (current_streak>longest_streak)
            {
                longest_streak = current_streak;
                i+=current_streak-1;
            }
        }
    }
    if (longest_streak>=7)
    {
        cout<<"YES"<<endl;
    }
    else if (longest_streak<7)
    {
        cout<<"NO"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    // cin>>test;

    while(test--)
    {
        solve();
    }

    return 0;
}
