//Que 
/*

Input:
1
2
88
42
99

Output:
1
2
88


*/

#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	//using for loop
	for(int i=1; ; i++){  //infinite loop
		cin>>n;
		if(n==88){
			break;
		}
		cout << n <<endl;
	}
	
	//using while loop
	while(1){
		cin>>n;
		if(n==88){
			break;
		}
		cout << n <<endl;	
	}
}
