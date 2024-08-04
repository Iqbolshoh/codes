//raqamlar yigindisi
#include <iostream>
using namespace std;
int main(){
	int n, k, s=0, x=0;
	cin>>n;
	for (; n>0; n=n/10){
		k=n%10;
		s=s+k;
		x++;
	}
	cout<<"raqamlar yigindisi " <<s <<endl <<x <<" xonali";
	return 0;
}