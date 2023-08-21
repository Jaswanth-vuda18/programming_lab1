#ifndef _GRAPH_H_
#define _GRAPH_H_
#include "AdjacencyList.h"

template <typename T>
class Graph{
private:
	int v;
	AdjacencyList<T> adjList;

public:
	Graph(int);
	void addEdge(int, int);
	void DFS(int src);
	void BFS(int src, Array<T> visited, Array<T> res);
};

#include "Graph.cpp"

#endif
