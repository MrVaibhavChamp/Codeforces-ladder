#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }
    int left_open = 0, left_closed = 0;
    int right_open = 0, right_closed = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (l[i] == 0)
        {
            left_closed++;
        }
        if (l[i] == 1)
        {
            left_open++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (r[i] == 0)
        {
            right_closed++;
        }
        if (r[i] == 1)
        {
            right_open++;
        }
    }
    if (left_closed >= left_open)
    {
        t += left_open;
    }
    else if (left_closed < left_open)
    {
        t += left_closed;
    }
    if (right_closed >= right_open)
    {
        t += right_open;
    }
    else if (right_closed < right_open)
    {
        t += right_closed;
    }
    cout << t;

    return 0;
}