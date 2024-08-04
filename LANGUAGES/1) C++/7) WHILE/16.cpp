#include <bits/stdc++.h>
using namespace std;
int main(){
float p;
cout<<"p="; cin>>p;
float D=10;
int k=0;
float K=200;
while(D<K)
{
    D+=D*p/100;

    k++;
cout<<k<<"-"<<D<<"\n";
}
   return 0;
}