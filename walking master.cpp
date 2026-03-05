#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a,b,c,d;
        if(d>b){
            cout<<-1<<endl;
            continue;
        }
        int move =d-b;
        a+=move;
        if(a<c){
            cout<<-1<<endl;
            continue;
        }
        move+=(a-c);
        cout<<move<<endl;
    }
    return 0;
}