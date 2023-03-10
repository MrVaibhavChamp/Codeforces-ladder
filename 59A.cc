#include<iostream>
#include<string>


using namespace std;

int main(){
    string s;
    cin>>s;
    int upper= 0, lower = 0;
    for (int i = 0; s[i]!='\0' ; i++)
    {
        if (isupper(s[i])!=0)
        {
            upper++;
        }
        if (islower(s[i])!=0)
        {
            lower++;
        }
    }
    
    // cout<<upper<<endl<<lower;

    if (upper<lower)
    {
        for (int x=0; x<s.size(); x++)
            putchar(tolower(s[x]));
    }
    else if (upper>lower)
    {
        for (int x=0; x<s.size(); x++)
            putchar(toupper(s[x]));
    }
    else if (upper=lower)
    {
        for (int x=0; x<s.size(); x++)
            putchar(tolower(s[x]));
    }

    return 0;
}