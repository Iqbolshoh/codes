#include <bits/stdc++.h>

using namespace std;

string Quarter(int x, int y){
    if(x>0 and y>0){
        return " 1-chorak ";
    }
    if(x<0 and y>0){
        return " 2-chorak ";
    }
    if(x<0 and y<0){
        return " 3-chorak ";
    }
    if(x>0 and y<0){
        return " 4-chorak ";
    }
}

int main(){
	int x, y;
for(int i=1; i<=4; i++){
	cin >> x >> y;
	cout << Quarter(x,y) <<endl;
}
return 0;
}