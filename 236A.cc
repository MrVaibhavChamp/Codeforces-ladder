#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int distinct = 0;
    for (int i = 0; s[i] != 0; i++)
    {
        int repeat = 0;
        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                repeat = 1;
                break;
            }
        }
        if (repeat == 1)
        {
            continue;
        }
        else if (repeat == 0)
        {
            distinct++;
            continue;
        }
    }
    if (distinct % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else if (distinct % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}