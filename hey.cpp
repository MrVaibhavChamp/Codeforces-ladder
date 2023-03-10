#include <iostream>
#include <string>
using namespace std; // Isko use nhi kiya to [std::cout<<"hello world!";] likhne se program error throw nhi krega.
// Terminal se run ke liye g++ hey.exe (Enter) .\a.exe (Enter).

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails() // This is a method.
    {
        cout << "The name of ur first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl;
    }

    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword;
    }

private: // inhe class ke andar se hi access kr skte hai!(like ye upar method se access kr liya h private variable.)
    int secretPassword;
};

class Programmer : public Employee // Inheritance.Programmer is derived and Employee is base class.public is access specifier.
{
public:
    int errors;
};

int main()
{
    //     cout<<"Hello World!"<<endl;
    //     cout<<"Next line";

    //     // short s2819hf=9;

    // // camelCase Notation
    //     int marksInMaths=82;
    //     cout<<"The marks of the student in maths is "<<marksInMaths;
    //     // using capital letters in big variables in between then when we need to call back just write the short form
    //     // and you will see it in the suggestions...

    //     short a;
    //     int b;
    //     long c;
    //     long long d;
    //     float const score=45.32;
    //     double score2 = 45.3222;
    //     long double score3 = 45.332;
    //     // score = 34.2; Not modifiable because of 'const'.

    //     int e, f;
    //     cout<<"Enter first number"<<endl;
    //     cin>>e;
    //     cout<<"Enter second number"<<endl;
    //     cin>>f;

    //     cout<<"The sum is "<<e+f<<endl;
    //     cout<<"e / f is "<<(float)e/f<<endl; 
    //     cout<<"e / f is "<<float(e)/f<<endl; Typecasting

    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of "<<i+1<<"th student"<<endl;
    //     cin>>marks[i];
    // }

    // int arr2d[2][3]={
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }
    // }

    // string name="Vaibhav";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"The substring of name is "<<name.substr(0,2)<<endl;
    // cout<<"The substring of name is "<<name.substr(2,3)<<endl;

    Employee Vaibhav("Vaibhav constructor", 344, 324432);
    Vaibhav.printDetails();
    // cout<<Vaibhav.secretPassword;
    Vaibhav.getSecretPassword();

    return 0;
}