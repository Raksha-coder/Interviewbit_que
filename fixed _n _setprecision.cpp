
#include<bits/stdc++.h>
using namespace std;

main(){
	double a = 100000;
	double b = 100000;
	double c = a*b;
	cout<<c<<"\n\n";
	
	//to remove the scientific calculation use -- fixed
	cout<<fixed<<c<<endl<<endl;
    
	//setprecision -- to control decimal after a value
	cout<<fixed<<setprecision(1)<<c;
		
}
