#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,K=0;
    cin>>n>>m;
    while(n>m){
    n=n-m;
    K++;
    }
    cout<<"qoldiq qismi="<<n<<endl;
    cout<<"butun qismi="<<K;
   return 0;
}