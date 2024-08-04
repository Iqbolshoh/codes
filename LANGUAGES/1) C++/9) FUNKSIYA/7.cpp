#include <bits/stdc++.h>

using namespace std;

 void invertdigit(int a, int k){
	for (; a>0; a=a/10){
		k=a%10;
		cout<<k;
	}
	cout<<endl;
}

int main(){
	int k, a, n=3;

	while(n>0){
		n--;
		cin>>a;
		invertdigit(a,k);
	}
    return 0;
}