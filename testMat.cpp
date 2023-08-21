#include <iostream>
#include "GraphMatrix.h"
#include "Array.h"
using namespace std;

int main(){
        int n = 3;
        Graph<int> graph(n);
        //AdjacencyList<int> adj(n);

        graph.addEdge(0,1);
        graph.addEdge(0,2);
        graph.addEdge(1,0);
        graph.addEdge(1,2);
        graph.addEdge(2,0);
        graph.addEdge(2,1);

        //adj.print();
        Array<int> visited(n);
        for(int i=0;i<n;i++){
                visited.setElement(i,0);
        }
        Array<int> res(n);
        graph.BFS(0,visited,res);
        res.getArray();

}
