#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b, c;
 	cout << " N = "; cin >> n;
	cout << " a = "; cin >> b;
	cout << " d = "; cin >> c;
	int a[n];
	for(int i=0; i<n; i++){
		a[i]=b;
		b*=c;
		cout<<"A["<<i<<"]="<<a[i] <<endl;
	}
return 0;
}