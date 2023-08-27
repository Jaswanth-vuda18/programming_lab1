#include <iostream>
#include "GraphMatrix.h"
#include "Array.h"
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

        Array<int> visited1(n);
        Array<int> visited2(n);
        cout << "BFS of given graph: ";
        graph.BFS(0,visited1);
        cout << "\nDFS of given graph: ";
        graph.DFS(0,visited2);
        // res.getArray();

}
