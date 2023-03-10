#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == b[i])
        {
            a[i] = '0';  // Nayi string bna ke dikkat aa rhi thi to intial hi ek string ko badal diya answer bna diya!
        }
        else
        {
            a[i]='1';
        }
        
    }
    for (int i = 0; a[i]!='\0'; i++)
    {
        putchar(a[i]);
    }
    
    return 0;
}