//reverse_no
//https://www.codechef.com/LRNDSA01/submit/FLOW007

#include <iostream>
using namespace std;

int main() {
   int t;
	cin>>t;
	
	while(t--){
		int n,rev=0,get_digit;
		cin>>n;
	
		while(n>0){
			get_digit = n%10;
			rev = rev*10 + get_digit;
			n = n/10;
		}
		cout<<rev<<endl;
	}
	return 0;
}

