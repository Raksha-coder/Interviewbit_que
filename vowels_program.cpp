//vowels and consant
#include<bits/stdc++.h>
using namespace std;

main(){
	char ch;
	cin>>ch;
	
	bool isLowerCase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' );
	bool isUpperCase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
	
	if(!isalpha(ch)){    
		cout<<"not an alphabet"<<endl;
	}else if(isLowerCase || isUpperCase){
		cout<<"it is an vowels"<<endl;
	}else{
		cout<<"it is an consonant";
	}
}
