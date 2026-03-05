#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int k;
        if(b%2==0){
            k=2;
        }
        else{
            k=b;
        }
        int  c=a*k;
        int  w=b/k;
        int f=c+w;
        if(f%2==0){
            cout<<f<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}