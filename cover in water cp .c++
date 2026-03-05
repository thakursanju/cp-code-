#include <bits/stdc++.h>
using namespace std;
int main(){
    long long  t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long ans = 0;
    bool flag = false;
    for(long long i=0;i<n;i++){
          if (s[i]=='.'&& i+1<n && s[i+1]=='.'&&i+2<n&&s[i+2]=='.'){
          flag=true;
          break;
      }
      if (s[i]=='.')
        ans++;
    }
      if (flag)
        cout<<2<<endl;
      
      else cout<<ans<<endl;
  

    

    }
    return 0;
  }

    


 
   