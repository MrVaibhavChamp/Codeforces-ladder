#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n];
    float orange=0;
    float ans;
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for (int i = 0; i < n; i++)
    {
        orange+=((float)p[i]/100);
    }
    ans = (float)orange/n;
    cout<<ans*100;
    return 0;
}