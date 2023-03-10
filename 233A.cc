#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n];
    if (n % 2 != 0)
    {
        cout << "-1";
    }
    else if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            p[i] = i;
            p[i - 1] = i + 1;
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << p[i]<<" ";
        }
    }

    return 0;
}