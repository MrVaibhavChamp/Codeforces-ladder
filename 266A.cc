#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count;
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==s[i+1])   // Bloody simple as hell but wasted a lotta time man!
        {
            count++;
        }
    }
    cout<<count;

    // int r = 0;
    // int g = 0;
    // int b = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (s[i - 1] == s[i])  
    //         if (s[i] == 'R')
    //             ++r;
    //         else if (s[i] == 'G')
    //         {
    //             ++g;
    //         }
    //         else if (s[i] == 'B')
    //             ++b;
    // }
    // cout << r + g + b;

    return 0;
}