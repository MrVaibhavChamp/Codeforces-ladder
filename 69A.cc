#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n], y[n], z[n];
    int sum_x=0, sum_y=0, sum_z=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        sum_x += x[i];
        sum_y += y[i];
        sum_z += z[i];
    }
    
    if (sum_x==0 && sum_y==0 && sum_z==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    
    return 0;
}