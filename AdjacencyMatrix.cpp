#include<iostream>
#include "AdjacencyMatrix.h"

using namespace std;

template <typename T>
AdjacencyMatrix<T>::AdjacencyMatrix(){
}

template <typename T>
AdjacencyMatrix<T>::AdjacencyMatrix(int size){
	this->size = size;
	adjMatrix = new Array<T>[size];
	for(int i=0;i<size;i++){
		Array<T> temp(size);
		adjMatrix[i] = temp;
	}
}

template <typename T>
void AdjacencyMatrix<T>::addEdge(int a, int b){
	if(a < 0 || a >= size || b < 0 || b >= size){
		cout << "vertex out of bounds!!" << endl;
		return;
	}
	adjMatrix[a].setElement(b,1);
}

template <typename T>
Array<T> AdjacencyMatrix<T>::getArray(int index){
	if(index >= size)
	{
		return Array<T>();
	}
	return adjMatrix[index];
}
template <typename T>
void AdjacencyMatrix<T>::print(){
	for(int i=0;i<size;i++){
		adjMatrix[i].getArray();
	}
}
