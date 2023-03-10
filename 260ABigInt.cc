#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    //Can't be used for VERY big integers!!!!
//     int a, b, n;
//     cin>>a>>b>>n;
//     long long int t = a;
//     for (int i = 1; i <= n; i++)
//     {
//         t = t*10;
//         for (int j = 0; j < 10; j++)
//         {
//             t+=j;
//             if (t%b!=0)
//             {
//                 t-=j;
//                 continue;
//             }
//             if (t%b==0)
//             {
//                 break;
//             }
//         }
//     }

//     long long int p = pow(10, n);
    
// // cout<<t%p<<endl;

//     if (t%p==0)
//     {
//         cout<<"-1";
//     }
//     else cout<<t;
    
    int a, b, n;
    cin >> a >> b >> n;
    bool exist(false); // yes/no ke liye boolean variable.
    for (int i = 0; i < 10; ++i) // ek hi no. daal ke bana skte h divisible uske baad 0 daalte jaao! DAMN!!!
    {
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            exist = true;
            break;
        }
    }
    if (!exist)
    {
        cout << -1 << endl;
    }

    return 0;
}