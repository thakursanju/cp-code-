

/**
 *    author:  KHUSHVINDER
 *    created:07.01.2026
 *    template: FOR ME 
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
int t; 
cin >> t;
while (t--) {
    int n; 
    cin >> n;
    int c0=0;
    for(int i=0;i<n;i++){
        int x; 
        cin >> x;
        if(x==0) c0++;
    }
    if(c0%2==1) cout << "Alice\n";
    else cout << "Bob\n";

}
    return 0;
}
