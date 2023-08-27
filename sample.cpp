#include<iostream>
#include "DynamicArray.h"
#include "LinkedList.h"
#include "AdjacencyList.h"
using namespace std;

int main(){

	AdjacencyList<int> adjList(4);
	adjList.addEdge(0,1);
	adjList.addEdge(0,2);
	adjList.addEdge(1,3);
	// adjList.addEdge(1,2);
	// adjList.addEdge(2,0);
	// adjList.addEdge(2,1);
	adjList.print();
	// cout << adjList. << endl;


	//Array<LinkedList<int>> arr(2);
	
	// DynamicArray<LinkedList<int>> *arr = new DynamicArray<LinkedList<int>>(3);
	// LinkedList<int> l1;
	// LinkedList<int> l2;
	// LinkedList<int> l3;
	// l1.insertNode(1);
	// l2.insertNode(2);
	// l3.insertNode(3);
	// arr->addElement(l1);
	// arr->addElement(l2);
	// arr->addElement(l3);
	
	// arr[0]->print();
	// arr[1]->print();
	// arr[2]->print();

	//arr.addElement(list);
	//arr.setArray(3);


	/*
	for(int i=0;i<3;i++){
		arr.getElement(0).setArray(2);
	}
		
	//arr.addElement(1);
	//arr.addElement(2);
	//arr.addElement(3);
	//arr.setElement(2,4);
*/	
	//DynamicArray<LinkedList<int>> arr(3);
	

	//arr.addElement(2);
	//arr.addElement(3);
	//arr.getArray();
	//arr.deleteElement(4);
	//arr.getArray();
	//cout << arr.getElement(0).getHead() << endl;

	// DynamicArray<int> arr(3,2);
	// arr.getArray();
	
	// LinkedList<int> * list = new LinkedList<int> [2];
	// LinkedList<int> l1;
	// LinkedList<int> l2;
	// l1.insertNode(1);
	// l2.insertNode(2);
	// list[0].insertNode(1);
	// list[0].insertNode(3);
	// list[1].insertNode(2);
	// list[1].insertNode(4);
	// list[0].print();
	// list[1].print();
}
