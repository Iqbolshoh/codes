#include <bits/stdc++.h>

using namespace std;

int b=0, c=0;

void IsPower(int k, int a){
		while(k>a){
			a *= 5;
		}
		if(k==a){
			cout<<"True"<<endl;
			c++;
		}
		else{
			cout<<"False"<<endl;
		}
	b++;
	if(b==5){
		cout <<c <<" Tasi 5 ning darajasi ";
	}
}
int main(){
	int k, a=1;
	for(int i=0; i<5; i++){
		cin >> k;
		IsPower(k,a);
	}
return 0;
}