#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        int size = 0;
        for (int j = 0; s[i][j] != 0; j++)
        {
            size++;
        }
        if (size <= 10)
        {
            cout << s[i] << endl;
        }
        if (size > 10)
        {
            cout << s[i][0] << size - 2 << s[i][size - 1] << endl;
        }
    }

    return 0;
}