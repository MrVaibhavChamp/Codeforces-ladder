#include<iostream>
#include<iomanip>
using namespace std;

// int function(int a, int b);  //Acceptable
// int function(int a, b);  //Not Acceptable
// int function(int, int);  //Acceptable
// Here a and b are formal parameters. 
// main ke andar se jb function ko call krte hai to jo parameters dete h wo actual parameters hote h (main ke andar wale h actual!)
// Formal parameters take values from the actual parameters.

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// // Call by reference using Pointers
// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Call by reference using Reference Variable
// void swapReferenceVar(int &a, int&b){    // a points to x(actual parameter), b to y(main) in memory. To jb address h to change hongi values!
//     int temp=a;
//     a=b;
//     b=temp;
// }

// // Return by reference
// int & ReturnReferenceVar(int &a, int &b){  // Returning a variable reference! Returns the address of the actual parameter given in main.
//     int temp=a;
//     a=b;
//     b=temp;
//     return a;
// }

// inline int product(int a, int b){           //It is a request to the compiler, not always accepted...
//     return a*b;                            // Loop, Recursions, Static Variables, Switch statements ke saath use nhi krna! Dikkat ho jayegi!
// }


// *******************Default Arguments*********************
// Agar function ke kisi argument ki koi value set nhi ki h to wo default value utha lega!!
// Function ki definition me default arguments ki values set krni hoti h!!
// Definition me compulsory arguments phle and default wale baad me likhne hote h

//*******************Constant Arguments*********************
// Function ke wo arguments jinki values glti se bhi function ke andar hme nhi bdlni h!
// int strlen(const char* p){
// }
// Ab function ke andar hm p ko change nhi kr paenge bilkul bhi..

// **************Function Overloading********************
// int sum(float a, int b){
//     cout<<"Using function with 2 arguments"<<endl;
//     return a+b;
// }
// int sum(int a, int b, int c){
//     cout<<"Using function with 3 arguments"<<endl;
//     return a+b+c;
// }
// Example: Calculate volume of different things, volume function is different but we want to call it by a single name.


int main(){
    // int a=4, b=5;
    // cout<<"The value of a==b is "<<(a==b)<<endl;

    // int a=5;
    // float b=1.5;
    // cout<<"The value of a+b is "<<a+b<<endl;
    // cout<<"The value of a+b is "<<a+(float)b<<endl;
    // cout<<"The value of a+b is "<<a+float(b)<<endl; //same as above line

    // By default decimal type numbers are considered to be double but for example if we write 10.2f or 10.2F this will be treated as a float
    // and 10.2l or 10.2L will be treated as a long double.

    // ***************Reference Variables**************
    // float x = 120;
    // float & y = x; //x ko ek aur naam de diya 'y'!
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Manipulators in C++******************
    // int a=4, b=25, c=5152;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;
    
    // cout<<"The value of a with setw is "<<setw(4)<<a<<endl; //Right justified bna diya!
    // cout<<"The value of b with setw is "<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is "<<setw(4)<<c<<endl;

    // struct is a data type defined by user!
    // union is also a data type just like struct but it just takes the space occupied by the largest memory taking data type!
    // enum Meal{Breakfast, Lunch, Dinner};
    // Meal m1=Breakfast;  Meal becomes a data type
    // cout<<m1<<endl;  m1 gets the value 0!
    // cout<<Breakfast<<endl; = 0
    // cout<<Lunch<<endl; = 1
    // cout<<Dinner<<endl; = 2    //as simple as that!

    // function(int num1, int num2);
    // num1 and num2 are actual parameters.

    // main function ke kisi variable ki value me changes krne h kisi function ki help se to call by reference use kro(address pass kro)
    // formal parameter me values actual parameters se copy hoti h isliye main ke andar wali variables ki value change nhi hoti!

    // int x=4, y=5;
    // // This won't work!
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<"."<<endl;
    // swap(x, y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<"."<<endl;

    // // This will work!
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<"."<<endl;
    // swapPointer(&x, &y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<"."<<endl;
    
    // // This will also work!
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<"."<<endl;
    // ReturnReferenceVar(x, y) = 154;  // This will give 154 value to the address returned by the function, i.e, x = 154 now.
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<"."<<endl;

    // *********************Inline functions**********************
    // int x, y;
    // cout<<"Enter the values of x and y: "<<endl;
    // cin>>x>>y;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;
    // cout<<"The value of x*y is: "<<product(x, y)<<endl;   // Jb koi simple sa function kaafi baar call krna pdta h to inline use krte h
    // // Inline ka mtlb code me function ka code line me hi rkh diya jaata h aur computation time save krte h! 
    // // Zyada complex functions ke liye use nhi krna h.

    // cout<<"The sum of 5 and 6 is"<<sum(5, 6)<<endl;     // Won't be giving any errors, function utha ke apne aap arguments match krke chla dega.
    // cout<<"The sum of 5, 5 and 6 is"<<sum(5, 5, 6)<<endl;   // Works absolutely fine!

    return 0;
}