#include <bits/stdc++.h>

using namespace std;

int main(){
	float n, m, v, z;
	cout<<"n = "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<endl;
		cout<<"MASSA = "; cin>>m;
		cout<<"HAJM = "; cin>>v;
		if(i==0){
			z=m/v;
		}
		if(z<m/v){
			z=m/v;
		}
		if(i==n-1){
			cout<<endl<<"ENG KATTA ZICHLIK = "<<z;
		}
	}
	return 0;
}