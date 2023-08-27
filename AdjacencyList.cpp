#include<iostream>
#include "AdjacencyList.h"

using namespace std;

template <typename T>
AdjacencyList<T>::AdjacencyList(int n){
	this->size = n;
	adjList = new LinkedList<T> [n];
}

// template <typename T>
// AdjacencyList<T>::AdjacencyList(int n, const T &data){
// 	this->size = n;
// 	adjList = new DynamicArray<LinkedList<T>>(n, data);
// }

template <typename T>
void AdjacencyList<T>::addEdge(int a, int b){
	if(a < 0 || a >= this->size || b < 0 || b >= this->size)
	{	
		cout << "vertex is out of bounds" << endl;
		return;
	}
	adjList[a].insertNode(b);
	adjList[b].insertNode(a);
}

// template <typename T>
// DynamicArray<T>* AdjacencyList<T>::getArray(int index){
// 	return adjList[index]->print();
// }

template <typename T>
void AdjacencyList<T>::print(){
	for(int i=0;i<size;i++){
		if(adjList[i].getHead() != NULL)
			adjList[i].print();
	}
}

/*
int main(){
	int n = 3;
	AdjacencyList<int> adjList(n);

	adjList.addEdge(0,1);
	adjList.addEdge(0,2);
	adjList.addEdge(1,0);
	adjList.addEdge(1,2);
	adjList.addEdge(2,0);
	adjList.addEdge(2,1);

	adjList.print();

}
*/
