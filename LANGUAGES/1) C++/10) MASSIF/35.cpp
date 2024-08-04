#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], c, m;
	for(int i=0; i<n; i++){
		cout<<"Arr["<<i<<"]=";
		cin>>arr[i];
	}
	for(int i=1; i<n-1; i++){
		if(arr[i-1]<arr[i] and arr[i]>arr[i+1]){
			cout<<arr[i]<<"  ";

		m=arr[0];
		if(arr[i]<m){
			m=arr[i];
	}

	}
}
			cout<<endl<<m;
	return 0;
}