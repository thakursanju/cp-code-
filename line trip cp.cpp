#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long >a;
        a.push_back(0);
        for(long long i=0;i<n;i++){
            long long temp;
            cin>>temp;
            a.push_back(temp);
        }
        a.push_back(x);
        n=a.size();
        long long maxi=INT_MIN;
        for(int i=1;i<n;i++){
            if (i==n-1){
                maxi=max(maxi,2*(a[i]-a[i-1]));
            }
            else{
                maxi=max(maxi,a[i]-a[i-1]);
            }

        }

        cout<<maxi<<endl;
    }
    return 0;
     



}


