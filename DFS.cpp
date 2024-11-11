// Graph ->  Tree -> traversing -> DFS(Death First Search) ->  PreOrder(NLR) , Post order, Inorder
// BFS -> (Breath First Search) -> level order traversal
// Smallest path-> 2Algo 
// Spanning Tree -> 2 Algo

// DFS -> PreOrder Traversal-> (NLR) 
// DFS / BFS -> Queue
#include<bits/stdc++.h>
using namespace std;
// dfs -> visited 

void DFSRecord(vector<vector<int>> &adj, vector<bool> &visited , int s){
    visited[s] = true;

    cout<<s<<" ";

    for(int i : adj[s]){
        if(visited[i] == false){
            DFSRecord(adj, visited, i);
        }
    }
}

void DFS(vector<vector<int>> & adj, int s){
    vector<bool>visited (adj.size(),false);
    DFSRecord(adj, visited, s);
}

void addedge (vector<vector<int>> &adj, int s, int t){
    adj[s].push_back(t); //  vector push_back(), pop_back() adj [1] = 2  ajd [2] = 1
    adj[t].push_back(s);
    //a -> b b->a
    // starting points
}

int main(){
    int v = 5;// user input size of array
    vector<vector<int>> adj(v);// 5 x 5 // create arr of size v
    vector<vector<int>> edges = {{1,2},{1,0},{2,0},{2,3},{2,4}};
    for(auto &e : edges){
        addedge(adj, e[0], e[1]);
    }
    int start = 1;//
    cout<< "Starting from "<<start<<endl;
    DFS(adj,start);
    return 0;
}