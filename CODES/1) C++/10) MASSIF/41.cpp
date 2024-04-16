#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
	cin>>n;
    int a[n];
    for( int i=0; i<n; i++){
    cout<<"A["<<i<<"]=";
	cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
			m=a[0]+a[1];
		if(a[i]+a[i+1]>m){
			m=a[i]+a[m+1];
		}
}


		cout<<m<<"  ";
   return 0;
}