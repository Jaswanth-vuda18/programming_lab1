#ifndef _ADJACENCYLIST_H_
#define _ADJACENCYLIST_H_
#include<vector>
#include"LinkedList.h"

template <typename T>
class AdjacencyList{
private:
	int size;
	LinkedList<T>* adj;

public:
	AdjacencyList(int n);
	
	LinkedList<T>* getAdjList();

	void addEdge(int a, int b);

	void print();	
};

#include "AdjacencyList.cpp"
#endif
