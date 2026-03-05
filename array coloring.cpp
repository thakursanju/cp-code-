/**
 *    author:  KHUSHVINDER
 *    created:23.01.2026
 *    template: FOR ME 
**/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define pb push_back
#define all(x) (x).begin(), (x).end()

inline void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int32_t main() {
    fastIO();

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
		int n,s,x;
		cin>>n>>s>>x;
		vector<int> arr(n);
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum==s){
			cout<<"YES"<<endl;
			continue;
		}
		for(int i=0;i<n;i++){
			arr[i]+=x;
			sum+=x;
			if(sum==s){
				cout<<"YES"<<endl;
				break;
			}
		}
		else{
			cout<<"NO"<<endl;
		}

    
    }
	return 0;
}


	
    
