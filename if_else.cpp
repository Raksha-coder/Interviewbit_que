#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	
	if(n % 2 == 0){           //even
		cout<<"YES";
	}else if(n % 3 == 0){     //divide by 3
		cout<<"Divisible by 3";
	}else{                    //odd
		cout<<"NO";
	}
}
