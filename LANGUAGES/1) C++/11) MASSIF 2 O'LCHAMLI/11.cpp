#include <iostream>
using namespace std;
int main(){
  int n,m;
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
    	if(i%2==1){
    		cout<<a[i][n-j-1]<<" ";
		}
		else{
			cout<<a[i][j]<<" ";
		}
	}
	cout<<endl;
  }
  return 0;
}