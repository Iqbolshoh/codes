#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
 	cout << " N = "; cin >> n;
	int a[n], b=1;
	for(int i=0; i<n; i++){
		a[i]=b;
		b+=2;
	cout<<"A["<<i<<"]="<<a[i] <<endl;
}
	return 0;
}