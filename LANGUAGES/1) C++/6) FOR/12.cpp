#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
	float k=1.1, s=1;
    cout <<" N = "; cin >> n;
    for(int i=1; i<=n; i++){
    	s*=k;
    	k+=0.1;
	}
	    cout <<" Ko'paytma = " <<s <<endl;
    return 0;
}