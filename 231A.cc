#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int solved = 0;
    for (int i = 0; i < n; i++)
    {
        int a[3];
        int surity = 0;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            surity += x;
        }
        if (surity > 1)
        {
            solved++;
        }
    }
    cout<<solved;
    return 0;
}