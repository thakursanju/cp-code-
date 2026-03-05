#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){   
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            if(arr[i-1]!=arr[i]){
                cout<<i<,endl;
                break;
            }
            
        }
    }
    return 0;
}