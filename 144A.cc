#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0], min = a[0];
    int MaxPos = 0, MinPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            MaxPos = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            MinPos = i;
        }
    }
    if (MaxPos < MinPos)
    {
        cout << MaxPos + n - MinPos - 1;
    }
    if (MaxPos > MinPos)
    {
        cout << MaxPos + n - MinPos - 2;
    }

    return 0;
}