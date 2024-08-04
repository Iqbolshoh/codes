#include <bits/stdc++.h>

using namespace std;

void Even(int *k){
	if(*k%2==0){
		cout<<"True" <<endl;
	}
	else{
		cout<<"False" <<endl;
	}
}
int main(){
    int x;

for(int i=0; i<3; i++){
    cout << "son = " cin >> x;
    Even(&x);
}
	return 0;
}