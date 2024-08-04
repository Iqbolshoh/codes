#include <bits/stdc++.h>

using namespace std;
int MAX, MIN, COUNT = 0;

void katta (int a){

  if(COUNT==0){
    MAX = a;
    MIN = a;
  }

  if(MAX<a){
    MAX = a;
  }
  if(MIN>a){
    MIN = a;
  }
  COUNT++;
  if(COUNT==4){
    cout<<"MAX : "<<MAX<<" "<<"MIN : "<<MIN;
  }
}

int main(){
  int a;
  for(int i=4;i>=1;i--){
    cin>>a;
      katta(a);
  }
   main();
   return 0;
}