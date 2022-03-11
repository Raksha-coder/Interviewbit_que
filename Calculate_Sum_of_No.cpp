//sum of natural number 


#include<bits/stdc++.h>
using namespace std;

main(){
	int n,sum=0;
	cin>> n;
	
	for(int i=1;i<=n;i++){
		cout<<i<<" ";
		sum += i;
	}
	cout<<"\n"<<sum;
}
