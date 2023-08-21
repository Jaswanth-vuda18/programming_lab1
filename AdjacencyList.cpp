#include<iostream>
#include "AdjacencyList.h"

using namespace std;

template <typename T>
AdjacencyList<T>::AdjacencyList(int n){
	this->size = n;
	this->adj = new LinkedList<T>[n];
}

template <typename T>
void AdjacencyList<T>::addEdge(int a, int b){
	if(a < 0 || a >= this->size || b < 0 || b >= this->size)
	{	
		cout << "vertex is out of bounds" << endl;
		return;
	}
	this->adj[a].insertNode(b);
}

template <typename T>
LinkedList<T>* AdjacencyList<T>::getAdjList(){
	return this->adj;
}

template <typename T>
void AdjacencyList<T>::print(){
	for(int i=0;i<size;i++){
		this->adj[i].print();
	}
}

/*
int main(){
	int n = 3;
	AdjacencyList<int> adj(n);

	adj.addEdge(0,1);
	adj.addEdge(0,2);
	adj.addEdge(1,0);
	adj.addEdge(1,2);
	adj.addEdge(2,0);
	adj.addEdge(2,1);

	adj.print();

}
*/
