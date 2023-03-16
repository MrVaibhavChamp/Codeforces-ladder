#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = ((k * l) / (nl));
    int y = c * d;
    int z = (p / np);
    int f = min(x, y);
    cout << (min(f, z) / n);
    return 0;
}