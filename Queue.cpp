#include<iostream>
#include "Queue.h"

using namespace std;

template <typename T> 
Queue<T>::Queue(){
	//stack = new LinkedList<T>();
}

template <typename T> 
void Queue<T>::push(T data){
	if(queue.getSize() == 0){
		queue.insertNodeAtIndex(1,data);
		return;
	}
	// insert node at tail
	queue.insertNodeAtIndex(queue.getSize()+1, data);
}

template <typename T> 
void Queue<T>::pop(){
	if(queue.isEmpty()){
		cout << "Queue is empty!!" << endl;
		return;
	}
	// delete node
	queue.deleteNode(queue.getHead()->getData());
}

template <typename T> 
bool Queue<T>::isEmpty(){
	return queue.isEmpty();
}

template <typename T> 
T Queue<T>::front(){
	if(queue.isEmpty()){
		return -1;
	}
	return queue.getHead()->getData();
}

/*
int main(){
	Queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout << q.front() << endl;
	q.pop();

	q.pop();

	q.pop();
	
	//q.pop();

	cout << q.front() << endl;
	return 0;
}
*/
