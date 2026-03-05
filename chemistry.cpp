#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long> ans(26,0);
        for(int i=0;i<n;i++){
            ans[s[i]-'a']++;
        }
        long long ans1=0;
        for(int i=0;i<26;i++){
            ans1+=ans[i]%2;
        }
            if(ans1>k+1){
                cout<<"NO"<<endl;
                
            }
            else{
                cout<<"YES"<<endl;
            }
        
    }
    return 0;
}