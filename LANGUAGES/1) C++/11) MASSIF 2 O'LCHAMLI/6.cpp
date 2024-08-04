#include <iostream>

using namespace std;

int main(){
  int m,q,n;
  cin>>m>>n;
  cout<<"q = ";
  cin>>q;
  int a[m][n],b[m];

	for(int i=0;i<m;i++){
		cout<<"A["<<i<<"][0]=";
		cin>>b[i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==0){
				a[i][j]=b[i];
			}
			else{
				a[i][j] = a[i][j-1]*q;
			}
			cout<<a[i][j]<<" ";
   		}
   		cout<<endl;
  	}
  return 0;
}