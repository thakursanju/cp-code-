#include <bits/stdc++.h>
using namespace std;
int main(){
    // Function to perform BFS on a graph starting from node 0
    // v: number of vertices
    // adj: adjacency list representation of the graph
    // Returns a vector containing the order of visited nodes
    vector<int> bfsgraph(int v, vector<int> adj[]){
        int n = v;  // Number of vertices
        int vis[n] = {0};  // visited array
        queue<int> q;
        q.push(0);
        vector<int> bfs;  // To store the BFS traversal order
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it : adj[node]){ // traverse all adjacent nodes
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
    
    return 0;
}
