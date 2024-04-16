#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=n-2; i>0; i--){
	if(a[i]>a[i+1] and a[i]>a[i-1]){
		cout<<a[i];
		return 0;
		}
	}
	cout<<"Bunday element yo'q";
	return 0;
}