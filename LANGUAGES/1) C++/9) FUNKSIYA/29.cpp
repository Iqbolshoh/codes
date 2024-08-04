#include <bits/stdc++.h>

using namespace std;

void DigitCount(int k, int n){
	while(k>0){
		n++;
		k /= 10;
	}
	cout <<n <<endl;
}
int main(){
	for(int i=0; i<5; i++){
		int k, n=0;
		cout << " K = "; cin >> k;
		DigitCount(k,n);
	}
	return 0;
}