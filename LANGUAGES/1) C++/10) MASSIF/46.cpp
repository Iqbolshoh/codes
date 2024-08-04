#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, R;
    cin>>n>>R;
    int a[n];
        for(int i=0;i<n;i++){
            cout<<"A["<<i<<"]=";
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++){
        	for(int j=0; j<n-1; j++){
        		if(a[i]!=a[j]){
        			if(abs(a[i]+a[j]-R)<abs(a[i+1]+a[j+1]-R)){
                		cout<<a[i]<<"  "<<a[j]<<endl;
                		break;
            		}else{
                		cout<<a[i+1]<<"  "<<a[j+1]<<endl;
                		break;
            		}
				}
       		}
       	}
return 0;
}