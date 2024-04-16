#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, n, MAX, MIN;
	cout<<"n = "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<i+1<<"-son = "; cin>>a;
		if(i==0){
			MAX=a;
			MIN=a;
		}
		if(MAX<a){
			MAX=a;
		}
		if(MIN>a){
			MIN=a;
		}
		if(i==n-1){
		cout<<"MIN = "<<MIN<<"   "<<"MAX = "<<MAX;
		}
	}
	return 0;
}