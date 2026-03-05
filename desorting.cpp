#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++) {  
            cin>>a[i];
        }
        
        long long x=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                long long d=a[i+1]-a[i];
                   long long x1=d/2+1;
                   x=min(x,x1);
            }
            else{
                x=0;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}