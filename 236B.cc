#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1073741824
int INF = 1e9;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n = a*b*c;
    vector<int> divisors(n+1);
    divisors[0]=1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=i; j<=n; j+=i){
            divisors[j]++;
        }
    }
    ll sum=0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                if(sum>mod){
                    sum%=mod;
                }
                sum+=divisors[i*j*k];
            }
        }
    }
    sum%=mod;
    cout<<sum;
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
