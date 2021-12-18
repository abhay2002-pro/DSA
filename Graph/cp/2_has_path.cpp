#include <iostream>
#include <queue>
using namespace std;

void DFStraversal(int ** edges, int n, int sv, int * visited){
    visited[sv] = true;

    for(int i = 0; i < n; i++){
        if(i!=sv){
            if(edges[sv][i] && !visited[i]){
                DFStraversal(edges,n,i,visited);
            }
        }
    }
}

void BFStraversal(int ** edges, int n, int sv, int * visited){
    visited[sv] = true;

    queue<int> pendingVertices;
    pendingVertices.push(sv);
    while(!pendingVertices.empty()){
        int curr = pendingVertices.front();
        pendingVertices.pop();
        visited[curr] = true;
        for(int i = 0; i < n; i++){
            if(i!=curr){
                if(edges[curr][i] && !visited[i]){
                    pendingVertices.push(i);
                }
            }
        }
    }
}

void hasPathDFS(int **edges, int n, int sv, int dv)
{
    int *visited = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    DFStraversal(edges, n, sv, visited);

    if (visited[dv])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    delete []visited;
}

void hasPathBFS(int **edges, int n, int sv, int dv)
{
    int *visited = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    BFStraversal(edges, n, sv, visited);

    if (visited[dv])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    delete []visited;
}

int main()
{
    int n, e;
    cin >> n >> e;

    int **edges = new int *[n];

    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int s, f;
        cin >> s >> f;
        edges[s][f] = 1;
        edges[f][s] = 1;
    }

    int sv, dv;
    cin >> sv >> dv;

    hasPathDFS(edges, n, sv, dv);
    hasPathBFS(edges, n, sv, dv);

    for(int i = 0; i < n; i++){
        delete []edges[i];
    }
}