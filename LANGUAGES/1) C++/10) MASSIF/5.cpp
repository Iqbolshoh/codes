#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b=1, c=0, d;
 	cout << " N = "; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		a[i]=b;
		d = b+c;
		c = b;
		b = d;
		cout<<" A["<<i<<"] = "<<a[i] <<endl;
	}
	return 0;
}