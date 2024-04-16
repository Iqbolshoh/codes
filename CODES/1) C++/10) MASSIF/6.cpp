#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b, c, d;
	cin >> b >> c;
		a[0] = b;
		a[1] = c;
	for(int i=2; i<n; i++){
		d = b+c;
		a[i]=d;
		b = d;
		c = d;
	}
	for(int i=0; i<n; i++){
		cout<<" A["<<i<<"] = "<<a[i]<<endl;
	}
	return 0;
}