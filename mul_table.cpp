//Display Multiplication table up to 10

#include<bits/stdc++.h>
using namespace std;

main(){
	int num;
	cin>>num;
	
	for(int i=1; i<=10;++i){
		cout<< num << " *" << i << " =" << num*i<<endl;
	}
}
