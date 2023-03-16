#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    string d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (d==c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}