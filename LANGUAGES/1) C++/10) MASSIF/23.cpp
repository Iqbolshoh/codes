#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, l;
	float d, s=0, S=0, c=0, C=0;
	cin>>n>>k>>l;
	int a[n];
	for(int i=0; i<n; i++){
		a[i]=i;
		S+=a[i];
		C++;
	}
	for(int i=k+1; i<l; i++){
		a[i]=i;
		s+=a[i];
		c++;
}
		d=(S-s)/(C-c);
	cout<<"O'rta arimetigi:"<<d;
	return 0;
}