#include <bits/stdc++.h>

using namespace std;

void Triangle(float a, float P, float S){
	S=sqrt(3)/4*pow(a,2);
	P=3*a;
	cout<<"S="<<S<<"  "<<"P="<<P <<endl;
}
int main(){
	int a, P, S;
	for(int i=3; i>0; i--){
		cin>>a;
	Triangle(a, P, S);
	}
    return 0;
}