#include<iostream>
#include "Graph.h"
#include "Stack.h"
#include "Queue.h"
#include "Array.h"

using namespace std;

template <typename T>
Graph<T>::Graph(int v){
	this->v = v;
	adjList = new AdjacencyList<T>(v);
}

template <typename T>
void Graph<T>::addEdge(int a, int b){
	adjList.addEdge(a,b);
}

template <typename T>
void Graph<T>::BFS(int src, Array<T> visited){
	Queue<T> q;
	q.push(src);

	while(!q.isEmpty()){
		int t = q.front();
		//res.addElement(t);
		cout << t << " ";
		q.pop();
		visited.setElement(t,1);
		Node<T>* cur = adjList.getAdjList()[t].getHead();
		while(cur != NULL){
			q.push(cur->getData());
			cur = cur->getNext();
		}
	}
	cout<<endl;
}

template <typename T>
void Graph<T>::DFS(int src, Array<T> visited){
	Stack<T> st;
	st.push(src);

	while(!st.isEmpty()){
		T t = st.top();
		st.pop();
		if(visited.getElement(t) == 0){
			cout << t <<" ";
		       	visited.setElement(t,1);	
		}
		Node<T>* cur = adjList.getAdjList()[t].getHead();
                while(cur != NULL){
			if(visited.getElement(cur->getData()) == 0){
                        	st.push(cur->getData());
			}
			cur = cur->getNext();
                }

	}
	cout<<endl;
}
/*
int main(){
	int n = 3;
	Graph<int> graph(n);
	//AdjacencyList<int> adj(n);

	graph.addEdge(0,1);
	graph.addEdge(0,2);
	graph.addEdge(1,0);
	graph.addEdge(1,2);
	graph.addEdge(2,0);
	graph.addEdge(2,1);

	//adj.print();
	Array<int> visited(n);
	for(int i=0;i<n;i++){
		visited.setElement(i,0);
	}
	Array<int> res(n);
	graph.BFS(0,visited,res);
	res.getArray();	

}
*/
