#include <bits/stdc++.h>
using namespace std;
int main(){
long long int a=0, b=1, c=0, f;
    cin>>f;
     while(c<f){
        c=b+a;
        b=a;
        a=c;
}
    cout<<a+b <<endl;
	return 0;
}