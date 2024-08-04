
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[n], c[n];
	for(int i=0; i<n; i++){
		cout <<" A[" <<i << "] = ";
		cin >> a[i];
	}
	cout <<endl;
	for(int i=0; i<n; i++){
		cout <<" B[" <<i << "] = ";
		cin >>b[i];
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	for(int i=0; i<n; i++){
		cout <<endl <<" A[" <<i << "] = " <<a[i];
	}
		cout <<endl;
	for(int i=0; i<n; i++){
		cout <<endl <<" B[" <<i << "] = " <<b[i];
	}
	return 0;
}