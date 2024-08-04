#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, n, x, P;
	cout<<"n = "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<endl;
		cout<<"A = "; cin>>a;
		cout<<"B = "; cin>>b;
		if(i==0){
			P=2*a*b;
		}
		if(P<2*a*b){
			P=2*a*b;
		}
		if(i==n-1){
			cout<<endl<<"ENG KATTA PERIMETR = "<<P;
		}
	}
	return 0;
}