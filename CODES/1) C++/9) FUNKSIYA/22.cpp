#include <bits/stdc++.h>

using namespace std;

void Clac(int a, int b, int op){
	if(op==1){
		cout<<"A-B="<<a-b;
	}if(op==2){
		cout<<"A*B="<<a*b;
	}
	if(op==3){
		cout<<"A/B="<<a/b;
	}
	if(op==4){
		cout<<"A+B="<<a+b;
	}
}
int main(){
	int a,b,op;
	cout<<"A="; cin>>a;
	cout<<"B="; cin>>b;
	cout<<"1 Ayrish "<<endl<<"2 Ko'paytirish"<<endl<<"3 Bo'lish"<<endl<<"4 Qo'shish "<<endl;
	cin>>op;
	Clac(a,b,op);
    return 0;
}