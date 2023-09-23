#include<iostream>
#include "AdjacencyList.h"
#include "Stack.h"
#include "Array.h"

using namespace std;

template <typename T>
void dfs(AdjacencyList<T> adj,int src, int n, Array<T> visited, Array<T> res){
	Queue<T> q;
	q.push(src);

	while(!q.isEmpty()){
		int t = q.front();
		res.addElement(t);
		q.pop();
		visited.setElement(t,1);
		Node<T>* cur = adj.getAdjList()[t].getHead();
		while(cur != NULL){
			q.push(cur->getData());
			cur = cur->getNext();
		}
	}
}

int main(){
	int n = 3;
	AdjacencyList<int> adj(n);

	adj.addEdge(0,1);
	adj.addEdge(0,2);
	adj.addEdge(1,0);
	adj.addEdge(1,2);
	adj.addEdge(2,0);
	adj.addEdge(2,1);

	//adj.print();
	Array<int> visited(n);
	for(int i=0;i<n;i++){
		visited.setElement(i,0);
	}
	Array<int> res(n);
	bfs(adj,n,0,visited,res);
	res.getArray();	

}
