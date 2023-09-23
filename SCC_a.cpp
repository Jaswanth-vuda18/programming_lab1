#include<iostream>
#include "AdjacencyMatrix.h"
#include "Array.h"
#include "DynamicArray.h"
#include "Stack.h"

using namespace std;

DynamicArray<int> L;
void Dfs(AdjacencyMatrix<int> mat,Array<int> visited, Stack<int> st,int N, int M,int u){
    if(visited[u] == 0){
        visited[u] = 1;
        for(int i=0;i<N;i++){
			if(mat.getArray(u).getElement(i) == 1){
				Dfs(mat,visited,st,N,M,i);
            }
        }
        st.push(u);
    }
}

AdjacencyMatrix<int> transform(AdjacencyMatrix<int> adj, int N){
    AdjacencyMatrix<int> changed(N);
    AdjacencyMatrix<int> mat = adj;
    for(int i=0;i < N;i++){
        for(int j=0;j < N;j++){
            if(mat.getArray(i).getElement(j) == 1 && (!changed.getArray(i).getElement(j))){
                mat.getArray(i).setElement(j,0);
                changed.getArray(i).setElement(j,1);
                mat.getArray(j).setElement(i,1);
                changed.getArray(j).setElement(i,1);
            }
        }
    }
    return mat;
}
void stronglyConnectedComponents(AdjacencyMatrix<int> mat,Array<int> visited,int N, int M,int src){

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(mat.getArray(i).getElement(j) == 1){
                if(visited[])
            }
        }
    }
}

int main(){
    int N = 8;
    AdjacencyMatrix<int> adj(N); //adjacency matrix
    adj.addEdge(0,1);
    adj.addEdge(0,3);
    adj.addEdge(1,2);
    adj.addEdge(3,4);
    adj.addEdge(3,7);
    adj.addEdge(4,5);
    adj.addEdge(4,6);
    adj.addEdge(4,7);
    adj.addEdge(5,6);
    adj.addEdge(7,6);

    adj.print();
    cout << endl;
    adj = transform(adj,N);
    adj.print();
}