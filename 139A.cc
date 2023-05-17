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
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    // int the_day;
    int i=0;
    while (n>0)
    {
        if (i==7)
        {
            i-=7;
        }
        n-=a[i];
        i++;
    }
    cout<<i;
    // for (int i = 1; i <= 7; i++)
    // {
    //     n -= a[i-1];
    //     if (n<=0)
    //     {
    //         the_day = i;
    //         break;
    //     }
    //     else if (i==7 && n==1)
    //     {
    //         the_day=8;
    //     }
    //     else if(i==7*k && n>1){
    //         i=1;
    //     }
    // }
    // if (the_day<8)
    // {
    //     cout<<the_day;
    // }
    // if (the_day==8)
    // {
    //     cout<<"1";
    // }
    // cout<<the_day;
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
