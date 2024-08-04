#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, n, c=0, min, max;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
		if(i==0){
			min=a;
			max=a;
		}
		if(min>a and c==0){
			min=a;
			c++;
		}
		if(max<a){
			max=a;
		}

		if(i==n-1){
			cout<<"MIN = " <<min <<"   MAX = " <<max;
		}
	}

	return 0;
}