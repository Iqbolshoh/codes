#include <bits/stdc++.h>
using namespace std;
int main(){
 float n,k=1,c=0;
     cin>>n;
    while(c<=n){
      c+=1/k;
      k++;
    }
   cout<<k<<endl;
   cout<<c;
   return 0;
}