#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007
int INF = 1e9;

void solve()
{
    ll t, x1, y1, x2, y2;
    cin >> t >> x1 >> y1 >> x2 >> y2;
    ll steps_x = x2 - x1;
    ll steps_y = y2 - y1;

    if (steps_x >= 0 && steps_y >= 0)
    {
        steps_x = abs(steps_x);
        steps_y = abs(steps_y);
        for (ll i = 0; i < t; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'N' && steps_y > 0)
            {
                steps_y--;
            }
            if (ch == 'E' && steps_x > 0)
            {
                steps_x--;
            }
            if (steps_x == 0 && steps_y == 0)
            {
                cout << i + 1;
                return;
            }
        }

        cout << "-1";
    }
    else if (steps_x >= 0 && steps_y <= 0)
    {
        steps_x = abs(steps_x);
        steps_y = abs(steps_y);
        for (ll i = 0; i < t; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'S' && steps_y > 0)
            {
                steps_y--;
            }
            if (ch == 'E' && steps_x > 0)
            {
                steps_x--;
            }
            if (steps_x == 0 && steps_y == 0)
            {
                cout << i + 1;
                return;
            }
        }

        cout << "-1";
    }
    else if (steps_x <= 0 && steps_y >= 0)
    {
        steps_x = abs(steps_x);
        steps_y = abs(steps_y);
        for (ll i = 0; i < t; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'N' && steps_y > 0)
            {
                steps_y--;
            }
            if (ch == 'W' && steps_x > 0)
            {
                steps_x--;
            }
            if (steps_x == 0 && steps_y == 0)
            {
                cout << i + 1;
                return;
            }
        }

        cout << "-1";
    }
    else if (steps_x <= 0 && steps_y <= 0)
    {
        steps_x = abs(steps_x);
        steps_y = abs(steps_y);
        for (ll i = 0; i < t; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'S' && steps_y > 0)
            {
                steps_y--;
            }
            if (ch == 'W' && steps_x > 0)
            {
                steps_x--;
            }
            if (steps_x == 0 && steps_y == 0)
            {
                cout << i + 1;
                return;
            }
        }

        cout << "-1";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    // cin>>test;

    while (test--)
    {
        solve();
    }

    return 0;
}
