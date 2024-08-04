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
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl<<endl;
  for(int i=1;i<m;i+=2){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}