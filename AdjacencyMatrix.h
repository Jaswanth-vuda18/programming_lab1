#ifndef _ADJACENCYMATRIX_H_
#define _ADJACENCYMATRIX_H_
#include "Array.h"

template <typename T>
class AdjacencyMatrix{
private:
	int size;
	Array<T>* adjMatrix;

public:
	AdjacencyMatrix();
	
	AdjacencyMatrix(int);

	Array<T> getArray(int);

	void addEdge(int ,int);

	void print();
};

#include "AdjacencyMatrix.cpp"
#endif
