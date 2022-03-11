// program to find factorial

#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin >> n;
	int fact = 1;
	
	if(n<0){
		cout<<"Negative Number";
	}
	else{
			for(int i=n;i>=1;i--){
				fact *= i;
			}
			cout<<"\n"<<fact*1LL;
	}
	

	
}
