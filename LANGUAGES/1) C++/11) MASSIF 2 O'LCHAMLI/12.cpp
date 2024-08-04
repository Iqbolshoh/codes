#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"A["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j%2==1){
				cout<<a[n-i-1][j]<<" ";
			}
			else{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}