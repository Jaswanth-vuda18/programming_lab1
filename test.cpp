#include <iostream>
#include "Graph.h"
#include "DynamicArray.h"
using namespace std;

int main(){
        int n = 8;
        Graph<int> graph(n);

        graph.addEdge(0,1);
        graph.addEdge(0,3);
        graph.addEdge(1,2);
        graph.addEdge(3,4);
        graph.addEdge(3,7);
        graph.addEdge(4,5);
        graph.addEdge(4,6);
        graph.addEdge(4,7);
        graph.addEdge(5,6);
        graph.addEdge(7,6);

        DynamicArray<int> visited(n,0);
        DynamicArray<int> visit(n,0);
        cout << "BFS of the given graph : ";
        graph.BFS(0,visited);
        cout << "\nDFS of the given graph : ";
        graph.DFS(0,visit);

}
