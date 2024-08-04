#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, b=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
	if(i%2==0){
		b=i;
	}
	if(i%2==1){
		b=n-i;
	}
	a[i]=b;

	cout<<endl<<"A["<<b<<"]="<<a[i];

}

return 0;
}