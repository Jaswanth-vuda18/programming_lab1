#include<iostream>
#include "GraphMatrix.h"
#include "Queue.h"
#include "Stack.h"
//#include "Array.h"

using namespace std;

template <typename T>
Graph<T>::Graph(int v){
	this->v = v;
	AdjacencyMatrix<T> temp(v);
	adjMatrix = temp;
}

template <typename T>
void Graph<T>::addEdge(int a, int b){
	if(a < 0 || a >= v || b < 0 || b >= v)
	{
		cout << "vertex is out of bounds!!" << endl;	
		return;
	}
	adjMatrix.addEdge(a,b);
	adjMatrix.addEdge(b,a);
}

template <typename T>
void Graph<T>::addEdgeDirected(int a, int b){
	if(a < 0 || a >= v || b < 0 || b >= v)
	{
		cout << "vertex is out of bounds!!" << endl;	
		return;
	}
	adjMatrix.addEdge(a,b);
	// adjMatrix.addEdge(b,a);
}

template <typename T>
void Graph<T>::BFS(int src, Array<T> &visited){
	Queue<T> q;
	q.push(src);
	visited[src] = 1;

	while(!q.isEmpty()){
		int t = q.front();
		//res.addElement(t);
		cout << t << " ";
		q.pop();
		visited.setElement(t,1);
		
		for(int i=0;i<v;i++){
			if(adjMatrix.getArray(t).getElement(i) == 1 && visited[i] == 0){
				q.push(i);
				visited[i] = 1;
			}
		}
	}
	cout<<endl;
}

template <typename T>
void Graph<T>::DFS(int src, Array<T> &visited){

	Stack<T> st;
	st.push(src);
	visited[src] = 1;
	cout << src <<" ";
	while(!st.isEmpty()){
		T t = st.top();
		int flag = 0;
		
		for(int i=0;i<v;i++){
			if(adjMatrix.getArray(t).getElement(i) == 1){
				if(visited[i] == 0){
					visited[i] = 1;
					st.push(i);
					cout<< i << " ";
					flag++;
					break;
				}
			}
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
