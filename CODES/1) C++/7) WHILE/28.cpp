#include <iostream>
using namespace std;
int main(){
    int a, b, c, i=0, j=0;
    cout <<" A = "; cin >>a;
    cout <<" B = "; cin >>b;
    cout <<" C = "; cin >>c;
    while(a>0){
        a -= c;
        i ++;
    }
    while(b>0){
        b -= c;
        j ++;
    }
    cout <<i*j <<" ta ";
    return 0;
}