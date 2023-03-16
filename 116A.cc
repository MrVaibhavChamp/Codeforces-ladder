#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int exit[n], enter[n];
    for (int i = 0; i < n; i++)
    {
        cin>>exit[i]>>enter[i];
    }
    int MaxPassengers=enter[0];
    int left=0;
    for (int i = 1; i < n; i++)
    {
        left += enter[i-1]-exit[i];
        if ((left + enter[i]) > MaxPassengers)
        {
            MaxPassengers = (left + enter[i]);
        }
    }
    cout<<MaxPassengers;
    
    return 0;
}