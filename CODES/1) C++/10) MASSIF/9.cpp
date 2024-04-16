#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], b=0, k=0;
	for(int i=0; i<n; i++){
		b+=5;
		a[i]=b;
		if(b%2==0){
			cout<<n-i<<"  ";
			k++;
		 }
	 }	for(int i=0; i<n; i++){
		cout<<endl<<"A["<<i<<"]="<<a[i];
}
		cout<<endl<<k<<" Ta juft element";
return 0;
}