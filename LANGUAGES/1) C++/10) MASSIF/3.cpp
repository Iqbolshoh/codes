#include <bits/stdc++.h>

using namespace std;

int main(){
 int n, b, c;
 	cout << " N = "; cin >> n;
	cout << " A = "; cin >> b;
	cout << " B = "; cin >> c;
 int a[n];
 for(int i=0; i<n; i++){
 	a[i]=b;
 	b+=c;
 	cout <<endl <<" A["<<i<<"] = "<<a[i];
	}
 	return 0;
}