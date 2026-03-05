#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i = 0; i < n; i++) 
            cin>>a[i];

        int count=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
            }
            else
                count=0;
            
            k=max(k,count);
            
        }
        cout<<k<<endl;

    }
    return 0;
}