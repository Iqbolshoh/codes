#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    char n;
    cout <<" N = "; cin >> n;
    a = n;
    if(48<=n and n<=57){
        cout <<" Digit ";
    }
    if(65<=n and n<=90 or 97<=n and n<=122){
        cout <<" Lotin ";
    }
    return 0;
}