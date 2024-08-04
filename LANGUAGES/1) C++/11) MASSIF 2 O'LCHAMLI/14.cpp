#include <iostream>
using namespace std;
int main(){
  int m;
  cin>>m;
  int arr[m][m];
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cout<<"arr["<<i<<"]["<<j<<"] = ";
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl<<endl;
  for(int k=0;k<m;k++){
    for(int i=0;i<m;i++){
      for(int j=k;j<m;j++){
        if(j==k and i<m-k){
          cout<<arr[i][j]<<" ";
        }
        else if(i==m-k-1){
          cout<<arr[i][j]<<" ";
        }
        else{
          cout<<"  ";
        }
      }
    cout<<endl;
    }
  cout<<endl;
  }
  return 0;
}