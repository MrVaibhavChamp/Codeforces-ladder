#include<iostream>
using namespace std;

int main(){
    long long a;
    cin>>a;
    int l=0;
    for (int i = 0; a!=0 ; i++)
    {
        if (a%10==4 || a%10==7)
        {
            l++;
        }
        a/=10;
    }

    if (l==4 || l==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}