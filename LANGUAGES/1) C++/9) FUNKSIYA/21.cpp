#include <bits/stdc++.h>

using namespace std;

int Sumrange( int a, int b, int c){
    int d=0;
    if(a>b or b>c){
		return 0;
	}else{
        for(int i=a+1; i<b; i++){
            d += i;
        }
        for(int i=b+1; i<c; i++){
            d +=i ;
        }
        return d;
    }
}

	int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout << Sumrange(a,b,c);
    return 0;
}