#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
       //precompute
     map<int,int>hash//  even in unordered_map hash size can 100001 depends
     for(int i=0;i<n;i++){
         hash[arr[i]]++;
     }
     // iterate in map
     for( auto it:hash){
        cout<<it.first<<"->"<<it.second<<endl;
     }
     int q;
     cin>>q;
     while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
     }
        /*
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin >>c;
        cout<<hash[c-'a']<<endl;*/
    

    return 0;
}
