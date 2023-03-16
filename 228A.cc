#include <iostream>
using namespace std;

int main()
{
    long long int s[4];
    int same = 0;
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 4-i; j++)
        {
            if (s[i] == s[i + j])
            {
                same++;
            }
        }
    }
    // cout << same;
    if (same==0)
    {
        cout << '0';
    }
    if (same==1)
    {
        cout << '1';
    }
    if (same==3||same==2)
    {
        cout << '2';
    }
    if (same==6)
    {
        cout << '3';
    }

    return 0;
}