#include<bits/stdc++.h>
using namespace std;

main(){
	int n1,n2,n3;
	cin>> n1 >>n2 >>n3;
	
	if(n1 >= n2 && n1 >=n3){
		cout<<"n1 is greater";
	}
	else if(n2 >=n3){
		cout<<"n2 is greater";
	}else{
		cout<<"n3 is greater";
	}
	
}
