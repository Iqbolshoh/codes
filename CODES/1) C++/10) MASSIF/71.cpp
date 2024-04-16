#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cout <<" N = "; cin >> n;
	int a[n], b;
	for(int i=0; i<n; i++){
		cout << "A[" <<i <<"] = "; cin >> a[i];
    }
	for(int i=0; i<n; i++){
        a[n-1-i] = a[i];
	}
	for(int i=0; i<n; i++){
		cout <<endl << "A[" <<i <<"] = " <<a[i];
	}
	return 0;
}