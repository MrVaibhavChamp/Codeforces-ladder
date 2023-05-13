#include <bits/stdc++.h>
using namespace std;
int INF = 1e9;

int main()
{
    int x = 0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if (s[1]=='+')
        {
            x++;
        }
        if (s[1]=='-')
        {
            x--;
        }
        
    }
    cout<<x;
    
    return 0;
}