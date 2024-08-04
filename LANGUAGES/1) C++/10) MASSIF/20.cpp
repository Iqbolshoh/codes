#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, l, s=0;
	cin>>n>>k>>l;
	int a[n];
	for(int i=k+1; i<l; i++){
		a[i]=i;
		s+=a[i];
	cout<<"A["<<i<<"]="<<a[i]<<endl;
	}
	cout<<"Yigindi:"<<s;
	return 0;
}