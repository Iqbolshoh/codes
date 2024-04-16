#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	float a[n], b[n];
	for(int i=0; i<n; i++){
		cout <<" A[" <<i << "] = ";
		cin >> a[i];
		if(a[i]<5){
			b[i] = a[i]*2;
		}else{
			b[i] = a[i]/2;
		}
	}
	for(int i=0; i<n; i++){
		cout <<endl <<" B[" <<i << "] = " <<b[i];
	}
	
	return 0;
}