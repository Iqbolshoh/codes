#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n,b=1;
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
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
    for(int j=0;j<n;j++){
		for(int i=0;i<m;i++){
    	b*=a[i][j];
    }
     cout<<endl<<j+1<<"-Ustun ko'paytmasi = "<<b;
     b=1;
  }
return 0;
}