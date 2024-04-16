#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n,b;
	cin>>m>>n;
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
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    	b+=a[i][j];
    }
     cout<<endl<<i+1<<"-satr yig'indisi = "<<b;
     b=0;
  }
return 0;
}