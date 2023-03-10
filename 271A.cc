#include <iostream>
using namespace std;

int distinct(int x)
{
    int a = x % 10;
    int b = (x / 10) % 10;
    int c = (x / 100) % 10;
    int d = (x / 1000) % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i < 10000 - a; i++)
    {
        if (distinct(a + i) == 1)
        {
            cout << a + i;
            break;
        }
        else
            continue;
    }

    return 0;
}