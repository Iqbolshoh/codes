#include <bits/stdc++.h>

using namespace std;

void ShiftRight(int a, int b, int c, int d){
	d=c;
	c=b;
	b=a;
	a=d;
	cout<<"A="<<a<<"  "<<"B="<<b<<"  "<<"C="<<c;

}
int main(){
int a, b, c, d;
cout<<"A="; cin>>a;
cout<<"B="; cin>>b;
cout<<"C="; cin>>c;
ShiftRight(a,b,c,d);
return 0;
}