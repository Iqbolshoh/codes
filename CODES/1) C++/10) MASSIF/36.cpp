#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], c=0, m;
	for(int i=0; i<n; i++){
		cout<<"A["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=1; i<n-1; i++){
		if(a[i-1]<a[i] and a[i]>a[i+1]){
	}
		else if(a[i-1]>a[i] and a[i]<a[i+1]){
		}else{
		cout<<a[i]<<"  ";
		c++;
	}
		m=a[0];
		if(a[i]>m){
			m=a[i];
	}
}		if(c==0){
		cout<<0;
	}
			cout<<endl<<m;
	return 0;
}