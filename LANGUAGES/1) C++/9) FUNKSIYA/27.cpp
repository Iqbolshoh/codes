#include <bits/stdc++.h>

using namespace std;

int b=0, c=0;

void IsPower(int k, int a,int n){
	while(k>a){
		a *= n;
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
		cout <<c <<" Tasi N ning darajasi ";
	}

}
int main(){
	int k, a=1, n;
		for(int i=1; i<=5; i++){
			cout << " K = "; cin >> k;
			cout << " N = "; cin >> n;
			IsPower(k,a,n);
		}
return 0;
}