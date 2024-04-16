#include <bits/stdc++.h>

using namespace std;

void IsSquare(int *k){
    int a = sqrt(*k);
	if(pow(a,2)==*k){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
}
int main(){
	int k;
	for(int i=0; i<3; i++){
		cout << "Son = "; cin >> k;
		IsSquare(&k);
	}
	return 0;
}