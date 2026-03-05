#include <bits/stdc++.h>
using namespace std;
private:  
void dsf(int node,vector<int> adj[],int vis[],vector<int>& dfs){
     vis[node]=1;
     ls.push_back(node);
     for(auto it:adj[node]){
            if(!vis[it]){
                dsf(it,adj,vis,ls);
            }
        }
}


vector<int> dfsgraph(int v, vector<int> adj[]){
    int n=v;
    int vis[n]={0};
    vis[0]=1;
    vector<int> ls;
    return ls;        
    };
