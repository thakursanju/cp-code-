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
        long long p=0;
        long long p1=0;
    
  
        for(int i=0;i<n;i++){
            if(a[i]==1){
                p++;
            }
            else
                p1++;
            
        }
        long long x=0;
        while(p<p1||p1%2==1){
            x++;
            p++;
            p1--;
        }
        cout<<x<<endl;
    }   
    return 0;
}