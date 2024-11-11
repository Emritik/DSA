#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &adj, int s){
    vector<bool> visited(adj.size(),false);
    queue<int> q;

    visited[s] = true;// [0,1,2]
    q.push(s); // [,2,3,4 ]

    while(!q.empty()){

        int curr = q.front(); // Rear -> insert, front -> remove
        q.pop();
        cout<<curr<<" ";

        for(int  x : adj[curr]){
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
            }// ture
        }
    }
}

void addedge(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int v = 5;
    vector<vector<int>> adj(v);// 5 x 5
    addedge(adj, 0,1);
    addedge(adj,0,2);
    addedge(adj,1,3);
    addedge(adj,1,4);
    addedge(adj,2,4);
    int s = 0;
    cout<<"Source node is "<<s<<endl;
    bfs(adj, s);
    return 0;
}

// BFS