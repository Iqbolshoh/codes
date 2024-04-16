#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i=i+2){
		b=i;
		a[i]=b;

		cout<<endl<<"A["<<i<<"]="<<a[i];
	}
return 0;
}