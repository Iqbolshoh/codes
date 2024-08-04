include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,a,k,i=0;
    cout<<"n=";
    cin>>n;

    while(n>0){
    a=n%10;
    n=n/10;
    k=a-2;
    if(k==0)
    cout<<2<<endl;
    i++;
    }
    cout<<"ikkilar soni. ="<<i;
   return 0;
}