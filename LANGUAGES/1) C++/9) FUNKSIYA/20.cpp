#include <bits/stdc++.h>

using namespace std;

void TriangleP( int a, int b, float c, float P){
	c=sqrt(pow(a,2)+pow(b,2));
	P=a+b+c;
    cout<<P;
}

	int main(){
	int a, b;
	cin>>a>>b;
	float c, P;
	TriangleP(a,b,c,P);
    return 0;
}