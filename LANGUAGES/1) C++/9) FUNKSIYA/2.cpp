#include <bits/stdc++.h>

using namespace std;

void PowerA234(float a,float b,float c){

	cout<<pow(a,2)<<" "<<pow(a,3)<<" "<<pow(a,4)<<endl;
	cout<<pow(b,2)<<" "<<pow(b,3)<<" "<<pow(b,4)<<endl;
	cout<<pow(c,2)<<" "<<pow(c,3)<<" "<<pow(c,4)<<endl;
}

int main(){
	float a,b,c;
	cin>>a>>b>>c;
	PowerA234(a,b,c);
    return 0;
}