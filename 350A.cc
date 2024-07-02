#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> right(n);
    vector<int> wrong(m);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        right[i] = x;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        wrong[i] = x;
    }
    int max_right = *max_element(right.begin(), right.end());
    int min_wrong = *min_element(wrong.begin(), wrong.end());
    // cout<<max_right<<min_wrong;
    for (int i = max_right; i < min_wrong; i++)
    {
        int pos=0;
        if(i>0){
            pos = 1;
        }
        else{
            cout<<"-1";
        }
        int half_time=0;
        for (int j = 0; j < n; j++)
        {
            if(right[j]*2 <= i){
                half_time++;
                break;
            }
        }

        if(pos == 1 && half_time == 1){
            cout<<i;
            return;
        }
    }
    cout<<"-1";
    
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
