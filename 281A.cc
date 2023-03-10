#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    s[0]=toupper(s[0]); // Can't use toupper() with cout will have to use putchar instead.
    for (int i = 0; s[i]!='\0' ; i++)
    {
        cout<<s[i];
    }
    return 0;
}