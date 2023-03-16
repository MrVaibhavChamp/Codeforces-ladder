#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int count_1 = 0, count_2 = 0, count_3 = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == '1')
        {
            count_1++;
        }
        else if (a[i] == '2')
        {
            count_2++;
        }
        else if (a[i] == '3')
        {
            count_3++;
        }
    }

    // cout<<count_1<<endl<<count_2<<endl<<count_3;
    for (int i = 0; i < count_1; i++)
    {
        a[2 * i] = '1';
    }
    for (int i = 0; i < count_2; i++)
    {
        a[2 * count_1 + 2 * i] = '2';
    }
    for (int i = 0; i < count_3; i++)
    {
        a[2 * count_1 + 2 * count_2 + 2 * i] = '3';
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        cout << a[i];
    }

    return 0;
}