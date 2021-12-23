#include<iostream>
#include<vector>

using namespace std;

vector<int> connectedComponenets(int ** edges, int n, int sv, bool * visited){
    vector<int> ans;
    visited[sv] = true;
    for(int i = 0; i < n; i++){
        if(i!=sv){
            if(edges[sv][i] && !visited[i]){
                vector<int> temp = connectedComponenets(edges,n,i,visited);
                ans.insert( ans.end(), temp.begin(), temp.end() );
            }
        }
    }
    ans.push_back(sv);
    return ans;
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
    bool * visited = new bool[n];
    for(int i = 0; i < n; i++){
        visited[i] = false;
    }

    vector<vector<int>> connected; 
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            vector<int> ans = connectedComponenets(edges,n,i,visited);
            connected.push_back(ans);
        }
    }
    cout<<connected.size()<<endl;
    for(int i = 0; i < connected.size(); i++){
        for(int j = 0; j < connected[i].size(); j++){
            cout<<connected[i][j]<<" ";
        }
        cout<<endl;
    }
}