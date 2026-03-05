#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    string s;
    cin >>s;
    long long s1=0;
    long long e=n-1;
    long long ans=n;
    while(s1<e){
        if(s[s1]!=s[e]){
            ans-=2;
        }
        else{
            break;
        }
        s1++;
        e--;

    }
    cout<<ans<<endl;
    }
    return 0;
}