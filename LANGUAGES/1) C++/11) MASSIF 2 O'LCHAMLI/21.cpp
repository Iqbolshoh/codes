#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n;
	float b, c=0;
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
    	if(j%2==1){
    		b+=a[i][j];
    		c++;
		}
    }
     cout<<endl<<i+1<<"-satr o'rta arifmetigi = "<<b/c;
     b=0;
     c=0;
  }
return 0;
}