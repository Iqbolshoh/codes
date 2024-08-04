#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, n, x, S;
	cout<<"n = "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<endl;
		cout<<"A = "; cin>>a;
		cout<<"B = "; cin>>b;
		if(i==0){
			S=a*b;
		}
		if(S<a*b){
			S=a*b;
		}
		if(i==n-1){
			cout<<endl<<"ENG KATTA YUZA = "<<S;
		}
	}
	return 0;
}