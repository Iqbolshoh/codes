#include <bits/stdc++.h>
using namespace std;
int main(){
long long int a=0, b=1, c, f;
    cin>>f;
     while(f>a or f>b or f>c){
           c=a+b;
		   a=b+c;
		   b=c+a;
     if(a==f or b==f or c==f){
		   cout<<f <<" Fibanachi son";
    }
}
	return 0;
}