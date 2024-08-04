#include <bits/stdc++.h>

using namespace std;

void Doira( int R, float S, float pi){
	S=pi*pow(R,2);
    cout<<S<<endl;
}

	int main(){
	int n=3, R;
	float pi=3.1415, S;

	while(n>0){
		n--;
		cin>>R;
		Doira(R,S,pi);
	}
    return 0;
}