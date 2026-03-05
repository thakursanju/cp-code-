#include <bits/stdc++.h>
using namespace std;
bool check(long long x)
{
    long long digit=0;
    long long zeroes=0;
    while(x){
        if(x%10==0) 
           zeroes++;
        digit++;
        x/=10;
    }
    return zeroes==digit-1;
}
int main(){
    vector<long long> v;
    for(long long i=1;i<=999999;i++){
        if(check(i)==true)
            v.push_back(i);
        
    }
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        long long a=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=n)
              a++;
            else
              break;
        }
        cout<<a<<endl;
    }
    return 0;

    
}
