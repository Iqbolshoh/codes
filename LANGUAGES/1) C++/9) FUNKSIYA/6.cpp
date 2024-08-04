#include <iostream>

using namespace std;

void DigitCountSum(int a, int k, int s, int x){
	for (; a>0; a=a/10){
		k=a%10;
		s=s+k;
		x++;
	}
	cout<<"raqamlar yigindisi " <<s <<endl <<x <<" xonali";
	cout<<endl;
}

int main(){
	int k, s=0, x=0, a, n=3;

	while(n>0){
		n--;
		cin>>a;
		DigitCountSum(a,k,s,x);
	}
    return 0;
}