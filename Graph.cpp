#include<iostream>
#include "Graph.h"
#include "Stack.h"
#include "Queue.h"
#include "Array.h"

using namespace std;

template <typename T>
Graph<T>::Graph(int v){
	this->v = v;
	AdjacencyList<T> temp(v);
	adjList = temp;
}

template <typename T>
void Graph<T>::addEdge(int a, int b){
	adjList.addEdge(a,b);
}

template <typename T>
void Graph<T>::BFS(int src, DynamicArray<T> &visited){
	Queue<T> q;
	q.push(src);
	visited[src] = 1;

	while(!q.isEmpty()){
		int t = q.front();
		// cout<<"size of queue: "<<q.size()<<endl;
		//res.addElement(t);
		cout << t << " ";
		q.pop();
		// visited.setElement(t,1);
		LinkedList<T> temp = adjList.getList(t);
		Node<T> * cur = temp.getHead();
		while(cur != NULL){
			int x = cur->getData();
			if(visited[x] == 0){
				visited[x] = 1;
				q.push(x);
			}
			cur = (cur->getNext());
		}
	}
	cout<<endl;
}

template <typename T>
void Graph<T>::DFS(int src, DynamicArray<T> &visited){
	
	Stack<T> st;
	st.push(src);
	visited[src] = 1;
	cout << src << " ";

	while(!st.isEmpty()){
		T t = st.top();
		int flag = 0;

		// if(visited.getElement(t) == 0){
		// 	cout << t <<" ";
		//        	visited.setElement(t,1);	
		// }
		LinkedList<T> temp = adjList.getList(t);
		Node<T> * cur = temp.getHead();
		while(cur != NULL){
			int x = cur->getData();
			if(visited[x] == 0){
				visited[x] = 1;
				st.push(x);
				cout << x << " ";
				flag++;
				break;
			}
			cur = (cur->getNext());
		}
		if(flag == 0)
			st.pop();
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
