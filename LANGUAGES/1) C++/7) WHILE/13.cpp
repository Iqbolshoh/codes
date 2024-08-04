#include <bits/stdc++.h>
using namespace std;
int main(){
	float n, k=1, s=0;
	cin>>n;
	  while(s>=n){
	  	k=1/(k+s);
	    s++;
	  }
	  cout<<s<< endl;
	  cout<<k<< endl;
 return 0;
 }