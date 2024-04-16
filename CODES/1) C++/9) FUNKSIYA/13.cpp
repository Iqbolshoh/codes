#include <bits/stdc++.h>

using namespace std;

void  Sortinc( int a, int b, int c, int a1, int b1, int c1,int a2, int b2, int c2,int s){
  a1=min(a,b);
  a2=min(a,c);

  c1=max(a,b);
  c2=max(a,c);

  s=abs((a+b+c)-min(a1,a2)-max(c1,c2));
  cout<<"A="<<max(c1,c2)<<"  " <<"B="<<s<<"  " <<"C="<<min(a1,a2);

}

int main(){
  int a, a1, a2, b, b1, b2, c, c1, c2,s;
  cin>>a>>b>>c;
  Sortinc(a,b,c,a1,b1,c1,a2,b2,c2,s);
    return 0;
}