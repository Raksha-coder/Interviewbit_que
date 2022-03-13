//source : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i;
	long long int pro=1;
	cin>>n;

	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}



	int ans = pow(10,9) +7;

	for(i=0;i<n;i++){
		pro = (pro*arr[i]) % ans;
	}
	cout<<pro;

    return 0;
}
