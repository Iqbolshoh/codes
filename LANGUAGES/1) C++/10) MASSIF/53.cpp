#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[n], c[n];
	for(int i=0; i<n; i++){
		cout <<endl<<" A[" <<i << "] = "; cin >> a[i];
		cout <<" B[" <<i << "] = "; cin >>b[i];
		c[i] = max(a[i],b[i]);
	}
	for(int i=0; i<n; i++){
		cout <<endl <<" C[" <<i << "] = " <<c[i];
	}
	return 0;
}