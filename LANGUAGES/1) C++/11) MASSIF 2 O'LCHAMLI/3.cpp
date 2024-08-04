#include <iostream>

using namespace std;

int main(){
  int n,m;
  cin>>m>>n;
  int a[m][n], b[m];
  for(int i=0;i<m;i++){
    cin>>b[i];
	for(int j=0;j<n;j++){
      a[i][j] = b[i];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}