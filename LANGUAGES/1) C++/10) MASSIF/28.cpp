#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], a;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i+=2){
		a=arr[0];
		if(arr[i]<a){
			a=arr[i];
		}
	}
	cout<<a;

	return 0;
}