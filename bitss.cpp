#include <bits/stdc++.h>
using namespace std;
int main(){
    long long X=0;
    long long n;
    cin>>n;
    string s;
    while(n){
        cin>>s;
        if(s=="X++" || s=="++X"){
            X++;
        }
        else{
            X--;
        }
        n--;
    }
    cou<<X<<endl;

    return 0;
}