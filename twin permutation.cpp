#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t ;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) c0++;
            else c1++;
        }
        int x=pow(2,c0)*c1;
        cout<<x<<"\n";

    }
	return 0;
}


