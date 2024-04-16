#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], c=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
}
	for(int i=0; i<n-1; i++){
	if(a[i]%2==a[i+1]%2){
		cout<<a[i+1];
	 	c++;
		return 0;
	}
}
	if(c==0){
		cout<<0;
	}

	return 0;
}