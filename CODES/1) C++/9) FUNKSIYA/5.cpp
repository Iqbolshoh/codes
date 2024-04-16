#include <bits/stdc++.h>

using namespace std;

void RescPS(int x1,int y1, int x2, int y2){

	int a,b,c,d,yuza,per;

	a = abs(y1-y2);
	b = abs(x1-x2);

	yuza = a*b;
	per = (a+b) * 2;

	cout<<yuza<<endl;
	cout<<per;
}

int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	RescPS(x1,y1,x2,y2);
    return 0;
}