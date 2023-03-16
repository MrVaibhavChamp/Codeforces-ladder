#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=a[0], min=a[0];
    int amazing;
    for (int i = 1; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            amazing++;
        }
        if (a[i]<min)
        {
            min=a[i];
            amazing++;
        }
    }
    cout<<amazing;
    return 0;
}