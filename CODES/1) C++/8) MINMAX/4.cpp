#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, n, MIN, c=1;
	cout<<"n = "; cin>>n;
	for(int i=1; i<=n; i++){
		cout<<i<<"-son = "; cin>>a;
		if(i==1){
			MIN=a;
		}
		if(MIN>a){
			MIN=a;
			c++;
		}
		if(i==n){
			cout<<c<<" - SON ENG KICHIK";
		}
	}
	return 0;
}