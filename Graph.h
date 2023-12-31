#ifndef _GRAPH_H_
#define _GRAPH_H_
#include "AdjacencyList.h"
#include "DynamicArray.h" 

template <typename T>
class Graph{
private:
	int v;
	AdjacencyList<T> adjList;

public:
	Graph(int);
	void addEdge(int, int);
	void DFS(int src, DynamicArray<T> &visited);
	void BFS(int src, DynamicArray<T> &visited);
};

#include "Graph.cpp"

#endif
