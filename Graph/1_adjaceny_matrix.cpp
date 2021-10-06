#include <iostream>

using namespace std;

#define n 4

void addEdge(bool adjMatrix[][n], int u,int v){
    adjMatrix[u-1][v-1] = true;
    adjMatrix[v-1][u-1] = true;
}

void printAdjMatrix(bool adjMatrix[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    bool adjMatrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adjMatrix[i][j] = false;
        }
    }

    addEdge(adjMatrix,2,4);
    addEdge(adjMatrix,1,2);
    addEdge(adjMatrix,3,1);
    addEdge(adjMatrix,3,4);


    // 1 - 2 - 4
    //  \
    //   3

    printAdjMatrix(adjMatrix);
    
}