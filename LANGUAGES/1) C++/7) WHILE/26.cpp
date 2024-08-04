#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1, b=1, c=0;

    while(c<n){
        c=b+a;
        b=a;
        a=c;
    }
    cout<<b<<endl <<a+b;


    return 0;
}