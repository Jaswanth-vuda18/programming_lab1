#include<iostream>
#include "AdjacencyMatrix.h"

using namespace std;

template <typename T>
AdjacencyMatix<T>::AdjacencyMatrix(int size){
	this->size = size;
	adjMatrix = new AdjacencyMatrix<T>[size];
	for(int i=0;i<size;i++){
		adjMatrix[i] = new Array<T>(size);
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
void AdjacencyMatrix<T>::print(){
	for(int i=0;i<size;i++){
		adjMatrix[i].getArray();
	}
}
