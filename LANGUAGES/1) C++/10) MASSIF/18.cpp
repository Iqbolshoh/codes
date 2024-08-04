#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k = arr[n-1];
    for(int i=n-2;i>-1;i--){
        if(arr[i]<k)
        {
            k = arr[i];
            break;
        }
    }
    if(arr[n-1]==k){
        cout<<0;
    }else{
        cout<<k;
    }
    return 0;
}