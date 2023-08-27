#ifndef _ADJACENCYLIST_H_
#define _ADJACENCYLIST_H_
#include<vector>
#include"LinkedList.h"
#include"DynamicArray.h"

template <typename T>
class AdjacencyList{
private:
	int size;
	LinkedList<T> *adjList;

public:
	AdjacencyList();
	AdjacencyList(int n);
	// AdjacencyList(int n, const T &data);
	
	LinkedList<T> getList(int);

	void addEdge(int a, int b);



	DynamicArray<T> getArray();

	void print();	
};

#include "AdjacencyList.cpp"
#endif
