#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, l, s=0, S=0;
	cin>>n>>k>>l;
	int a[n];
	for(int i=0; i<n; i++){
		a[i]=i;
		S+=a[i];
	}
	for(int i=k+1; i<l; i++){
		a[i]=i;
		s+=a[i];

	}
	cout<<"Yigindi:"<<S-s;
	return 0;
}