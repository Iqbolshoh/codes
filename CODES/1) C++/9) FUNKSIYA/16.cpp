#include <bits/stdc++.h>

using namespace std;

void ishora(int a){
	if(a<0){
		cout<<-1;
	}
	if(a==0){
		cout<<0;
	}
	if(a>0){
		cout<<1;
	}
}
int main(){
	int a;
	cin>>a;
	ishora(a);
    return 0;
}