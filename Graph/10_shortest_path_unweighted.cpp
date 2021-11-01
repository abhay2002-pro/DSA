#include<bits/stdc++.h>

using namespace std;

void BFS(vector<int> adj[],int V,int s,int dist[]){
    bool visited[V];
    for(int i = 0; i < V; i++){
        visited[i] = false;
    }
    dist[s]=0;
    visited[s]=true;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i : adj[u]){
            if(!visited[i]){
                dist[i] = dist[u] + 1;
                visited[i]=true;
                q.push(i);
            }
        }
    }
}


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    int V=4;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,0,2); 
	addEdge(adj,1,3);
    int dist[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
    }
	dist[0]=0;
	BFS(adj,V,0,dist); 
    
    for(int i=0;i<V;i++){
        cout<<dist[i]<<" ";
    }

	return 0;  
}