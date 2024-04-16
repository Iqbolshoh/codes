#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1, b=1, c=0, i=3;
    while(c<n){
        c=b+a;
        b=a;
        a=c;
        i++;
    }
    cout <<i <<" - had";
    return 0;
}