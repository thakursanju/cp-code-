#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int,int> a(n);
    for(int i=0;i<n;i++){   
        cin>>a[i].first;
        a[i].second=i+1;
    }
    int sum=0;
    sort(a.begin(),a.end());
    vector<int> ans;
    for(int i=0;i<n;i++){
        
        if(sum+=a[i].first<=k){
            sum+=a[i].first;
            ans.push_back(a[i].second);
        } else{
            break;
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }   

    return 0;
}

