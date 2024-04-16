#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], c=0;
	for(int i=0; i<n; i++){
		cout<<"Arr["<<i<<"]=";
		cin>>arr[i];
	}
	for(int i=1; i<n; i++){
		if(arr[i-1]<arr[i]){
			cout<<n-i<<"  ";
			c++;
		}
	}
	cout<<endl<<c<<" ta";

	return 0;
}