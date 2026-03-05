#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a[n];
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long count=0;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>k){
                count++;
            }
        }
        cout<<count+1<<endl;

    }
    return 0;
}
