#include <iostream>
using namespace std;
int main(){
	long int n, k, s=0, c=0, b;
	cin>>n;
	b=n;
	for (b; b>0; b=b/10){
		k=n%10;
		s=s+k;
		c++;
	}
	if(s%2==1 and c%2==1){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}