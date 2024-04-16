#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
	    cout <<" A["<<i<<"] = ";
	    cin >> a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i]<=n and a[i]>0){
			if(i+1==n){
				cout << "0";
			}
		}else{
			cout <<i <<" ";
			break;
		}
	}
		return 0;
}