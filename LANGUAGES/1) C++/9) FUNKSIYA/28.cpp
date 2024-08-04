#include <bits/stdc++.h>

using namespace std;

int c=0;

void IsPrime(int n, int k){
	for(int i=2; i<n/2; i++){
		if(n%i==0){
			cout<<"False"<<endl;
			break;
		}else{
			cout<<"True"<<endl;
		}
	}
}
int main(){
	int k, n;
	cout << " K = "; cin >> k;
	for(int i=0; i<k; i++){
	cout << " N = "; cin >> n;
		IsPrime(n, k);
	}
	return 0;
}