#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i=i+2){
	a[i]=i+1;
	cout<<endl<<"A["<<i<<"]="<<a[i];
}
		cout<<endl;
	for(int i=0; i<n; i=i+2){
	a[i]=n-i-2;

		cout<<endl<<"A["<<i<<"]="<<a[i];
}
return 0;
}