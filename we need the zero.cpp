#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
       int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    


    long long  x=0;
    for(int i=0;i<n;i++)
        x^=a[i];



    if(n%2==1){
        cout<<x<<endl;
    }
    else{
        if(x==0)
            cout<<0<<endl;
        
        else
            cout<<-1<<endl;
    
    }
}
    return 0;


}