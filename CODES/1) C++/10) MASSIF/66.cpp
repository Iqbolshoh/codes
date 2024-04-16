#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cout <<" N = "; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cout << "A[" <<i <<"] = "; cin >> a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			k = a[i];
			break;
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]%2==0){
			a[i] += k;
		}
		cout <<endl << "A[" <<i <<"] = " <<a[i];
	}
	return 0;
}