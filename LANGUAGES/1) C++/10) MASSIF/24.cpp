#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
}
	for(int i=0; i<n-1; i++){
	a=arr[i+1]-arr[i];
	b=arr[1]-arr[0];
}

		if(a==b){
			cout<<a;
		}
		else{
			cout<<0;
		}

	return 0;
}