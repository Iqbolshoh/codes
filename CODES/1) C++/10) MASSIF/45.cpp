#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
        for(int i=0;i<n;i++){
            cout<<"A["<<i<<"]=";
            cin>>a[i];
        }
        for(int i=0;i<n-2;i++){
            if(abs(a[i]-a[i+1])<abs(a[i+1]-a[i+2])){
                cout<<i<<"  "<<i+1;
            }else{
                cout<<i+1<<"  "<<i+2;
            }
        }
return 0;
}