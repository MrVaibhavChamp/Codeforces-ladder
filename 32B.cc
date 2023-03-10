#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '.')
        {
            cout << "0";
            continue;
        }
        else if (s[i] == '-')
        {
            if (s[i + 1] == '.')
            {
                cout << "1";
                i++;
                continue;
            }
            if (s[i + 1] == '-')
            {
                cout << "2";
                i++;
                continue;
            }
        }
    }
    return 0;
}