#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int next_prime;
    for (int i = n + 1; i <= m; i++)
    {
        if (i <= 3)
        {
            if (i % 2 != 0)
            {
                next_prime = i;
                break;
            }
        }
        else if (i <= 5)
        {
            if (i % 2 != 0 && i % 3 != 0)
            {
                next_prime = i;
                break;
            }
        }
        else if (i <= 7)
        {
            if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
            {
                next_prime = i;
                break;
            }
        }
        else
        {
            if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            {
                next_prime = i;
                break;
            }
        }
    }
    if (next_prime == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}