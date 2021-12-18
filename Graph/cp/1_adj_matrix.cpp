#include<iostream>
#include <queue>

using namespace std;

void DFStraversal(int ** edges, int n, int sv, bool * visited){
    cout<<sv<<" ";
    visited[sv] = true;
    for(int i = 0; i < n; i++){
        if(i!=sv){
            if(edges[sv][i] && !visited[i]){
                DFStraversal(edges,n,i,visited);
            }
        }
    }
}

void BFStraversal(int ** edges, int n, int sv,bool * visited){
    queue<int> pendingVertices;
    pendingVertices.push(sv);
    visited[sv] = true;
    while(!pendingVertices.empty()){
        int curr = pendingVertices.front();
        pendingVertices.pop();
        cout<<curr<<" ";
        for(int i=0;i<n;i++){
            if(edges[curr][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
    }
}

void BFS(int ** edges,int n){
    bool * visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    cout<<"BFS of the graph : ";
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            BFStraversal(edges,n,i,visited);
        }
    }
    cout<<endl;
    delete []visited;
}

void DFS(int ** edges, int n){
    bool * visited = new bool[n];
    for(int i = 0; i < n; i++){
        visited[i] = false;
    }
    cout<<"DFS of the graph : ";
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            DFStraversal(edges,n,i,visited);
        }
    }
    cout<<endl;
    delete []visited;
}

int main(){
    int n;
    int e;
    cin>>n>>e;
    int** edges = new int*[n];
    for(int i = 0; i < n; i++){
        edges[i] = new int[n];
        for(int j = 0; j < n; j++){
            edges[i][j] = 0;
        }
    }
    for(int i = 0; i < e; i++){
        int s,f;
        cin>>s>>f;
        edges[s][f] = 1;
        edges[f][s] = 1;
    }
    
    BFS(edges,n);
    DFS(edges,n);
    for(int i = 0; i < n; i++){
        delete []edges[i];
    }
}