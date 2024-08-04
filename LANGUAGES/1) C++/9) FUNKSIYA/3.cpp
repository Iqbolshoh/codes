#include <bits/stdc++.h>

using namespace std;

void MEAN(float a,float b,float c, float d){

	cout<<(a+b)/2<<"  " <<sqrt(a*b) <<endl;
	cout<<(a+c)/2<<"  " <<sqrt(a*c) <<endl;
	cout<<(a+d)/2<<"  " <<sqrt(a*d) <<endl;

}

int main(){
	float a,b,c,d;
	cin>>a>>b>>c>>d;
    MEAN(a,b,c,d);
    return 0;
}