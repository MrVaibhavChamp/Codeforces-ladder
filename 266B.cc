#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for (int k = 0; k < t; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='B')
            {
                if (s[i+1]=='G')
                {
                    s[i]='G';
                    s[i+1]='B';
                    i++;
                    continue;
                }
            }
        }
    }
    cout<<s;
    return 0;
}