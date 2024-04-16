#include <iostream>

using namespace std;

int main(){
  int m,n;
  cin>>m>>n;
  int a[m][n],b[n];
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      a[i][j] = b[j];
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}