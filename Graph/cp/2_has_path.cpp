#include <iostream>
using namespace std;

void DFStraversal(int ** edges, int n, int sv, int * visited){
    visited[sv] = true;
    // cout<<sv<<" ";
    for(int i = 0; i < n; i++){
        if(i!=sv){
            if(edges[sv][i] && !visited[i]){
                DFStraversal(edges,n,i,visited);
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

    for(int i = 0; i < n; i++){
        delete []edges[i];
    }
}