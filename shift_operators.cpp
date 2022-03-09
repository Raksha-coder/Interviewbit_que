#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int num = 212,i;
	
	cout<<"shift right operation"<<endl;
	for(i=0;i<4;i++){
		cout<<"212 "<<i<<" = "<<(num >> i)<<endl;
	}
	
	cout<<"shift left operation"<<endl;
	for(i=0;i<4;i++){
		cout<<"212 "<<i<<" = "<<(num << i)<<endl;
	}
	
	return 0;
}

	

//left and right shifting 
