#include <bits/stdc++.h>

using namespace std;

void RingS( int R1, int R2, float S, float pi){
	S=pi*pow(R2-R1,2);
    cout<<abs(S)<<endl;
}

	int main(){
	int n=3, R1, R2;
	float pi=3.1415, S;

	while(n>0){
		n--;
		cin>>R2>>R1;
		RingS(R1,R2,S,pi);
	}
    return 0;
}