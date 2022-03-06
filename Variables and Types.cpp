/*Que :You have to input 5 space-separated values: int, long, char, float and double respectively.

Print each value on a new line in the same order it is received as input. Note that 
the floating point value should be correct up to 3 decimal places and the double to 
9 decimal places.

*/ 

#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
   
    int num;
    long num2;
    char ch;
    float flo;
    double dub;

    cin>>num>>num2>>ch>>flo>>dub;

    cout<<num<<endl;
    cout<<num2<<endl;
    cout<<ch<<endl;
    cout<<fixed<<setprecision(3);
    cout<<flo<<endl;
    cout<<fixed<<setprecision(9);
    cout<<dub;
    
    return 0;
}
