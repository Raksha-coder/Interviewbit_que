/*
Input Format

You will be given two positive integers,a and b (a<=b), separated by a newline.

Output Format

For each integer n in the inclusive interval : a,b

If ,1<=n<=9 then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".


source : https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    
    for(int i=a;i<=b;i++){
        
        if(1<=i && i<=9){
            switch(i){
                case 1:
                    cout<<"one\n";
                break;
                
                case 2:
                    cout<<"two\n";
                break;
                
                case 3:
                    cout<<"three\n";
                break;
                
                case 4:
                    cout<<"four\n";
                break;
                
                case 5:
                    cout<<"five\n";
                break;
                
                case 6:
                    cout<<"six\n";
                break;
                
                case 7:
                    cout<<"seven\n";
                break;
            
                case 8:
                    cout<<"eight\n";
                break;
                
                case 9:
                    cout<<"nine\n";
            }
        }
        else if((i>9)&& (i%2==0)){
            cout<<"even"<<endl;
        }
        else if((i>9)&& (i%2!=0)){
            cout<<"odd"<<endl;
        }else{
            cout<<"not valid";
        }
    }
    
    return 0;
}
