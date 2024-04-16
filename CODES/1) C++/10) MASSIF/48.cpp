#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c=1, max=0;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
	    cout <<" A["<<i<<"] = ";
	    cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0; i<n; i++){
		if(a[i]==a[i+1]){
			c++;
		}else{
			c = 1;
		}
		if(max<c){
			max = c;
		}
	}
	cout << max;
	return 0;
}