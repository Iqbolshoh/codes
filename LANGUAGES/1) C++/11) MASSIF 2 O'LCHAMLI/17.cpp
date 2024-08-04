#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n,k,b=0,c=1;
	cin>>m>>n;
	cout<<"K = ";
	cin>>k;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"A["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl<<endl;
  for(int i=0;i<n;i++){
  	cout<<a[k-1][i]<<" ";
  	b+=a[k-1][i];
  	c*=a[k-1][i];
  }
  cout<<endl;
  cout<<"Yig'indi = "<<b<<endl;
  cout<<"Ko'paytma = "<<c<<endl;
  return 0;
}