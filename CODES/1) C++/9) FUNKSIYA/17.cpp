#include <bits/stdc++.h>

using namespace std;

void Tenglama(int a, int b, int c, int d){

	d=pow(b,2)-4*a*c;

	if(d>0){
		cout<<endl<<"X1="<<(-b+sqrt(d))/2*a;
		cout<<"  "<<"X2="<<(-b-sqrt(d))/2*a;
	}

	if(d==0){
		cout<<endl<<"X="<<(-b+sqrt(d))/2*a;
	}
	if(d<0){
		cout<<"Tenglama ildizga ega emas";
	}
}
int main(){
	int a, b, c, d;
cout<<"A="; cin>>a;
cout<<"B="; cin>>b;
cout<<"C="; cin>>c;
Tenglama(a,b,c,d);
return 0;
}