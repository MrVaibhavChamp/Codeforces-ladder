#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool exist = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            exist = 1;
        }
    }
    if (exist == 1)
    {
        cout << "YES";
    }
    else if (exist == 0)
    {
        cout << "NO";
    }
    return 0;
}