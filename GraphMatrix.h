#ifndef _GRAPH_H_
#define _GRAPH_H_
#include "AdjacencyMatrix.h"

template <typename T>
class Graph{
private:
	int v;
	AdjacencyMatrix<T> adjMatrix;

public:
	Graph(int);
	void addEdge(int, int);
	void addEdgeDirected(int, int);
	void DFS(int src, Array<T> &visited);
	void BFS(int src, Array<T> &visited);
};

#include "GraphMatrix.cpp"

#endif
