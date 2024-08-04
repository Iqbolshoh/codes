#include <bits/stdc++.h>

using namespace std;

void ShiftLeft(int a, int b, int c, int d){

	d=a; a=b; b=c; c=d;

	cout<<"A="<<a<<"  "<<"B="<<b<<"  "<<"C="<<c;

}
int main(){
int a, b, c, d;
cout<<"A="; cin>>a;
cout<<"B="; cin>>b;
cout<<"C="; cin>>c;
ShiftLeft(a,b,c,d);
return 0;
}