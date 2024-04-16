#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i=i+2){
	b=n-i-1;
	a[b]=b;

	cout<<endl<<"A["<<b<<"]="<<a[b];

}

return 0;
}