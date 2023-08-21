#include"LinkedList.h"
#include<iostream>
//#include "Node.cpp"
using namespace std;

/*
template <typename T> class Node{
private:
	T data;
	Node<T>* next;

public:

template <typename T>
Node<T>::Node(){
	this->next = NULL;
}

template <typename T>
Node<T>::Node(T data){
	this->data = data;
	this->next = NULL;
}

template <typename T>
Node<T>* Node<T>:: getNext(){
	return this->next;		
}

template <typename T>
void Node<T>::setNext(Node<T>* node){
	this->next = node;
}

template <typename T>
T Node<T>::getData(){
	return this->data;
}

template <typename T> class LinkedList{
private:
	Node<T> *head;

public:
*/

template <typename T>
LinkedList<T>::LinkedList(){
	this->head = NULL;
}

template <typename T>
Node<T>* LinkedList<T>::getHead(){
	if(head == NULL)
		return NULL;
	return head;
}

template <typename T>
bool LinkedList<T>::isEmpty(){
	if(!this->head)
		return true;
	return false;
}

template <typename T>
void LinkedList<T>::insertNode(T data){
	Node<T> *current = head;
	Node<T> *temp = new Node<T>(data);
	if(head == NULL){
		head = temp;
		return;	
	}
	while(current->getNext() != NULL){
		current = current->getNext();
	}
	current->setNext(temp);
}

template <typename T>
void LinkedList<T>::insertNodeAtIndex(int index, T data){
		
	Node<T> *current = head;
	Node<T> *previous = NULL;
	Node<T> *node = new Node<T>(data);
		
	if(head == NULL && index == 1){
		head = node;
		return;
	}

	if(index-1 > this->getSize() || index <= 0){
		cout << "Index out of bounds!!" << endl;
		return;
	}
		
	int j = 0;
		
	// using 1-indexing i.e., 
	// index runs from 1 to N (if N is the size of the List) 
	while(current != NULL){
		j++;
		if(j == index){
	
			if(previous == NULL){
				head = node;
				node->setNext(current);
			}
			else{
				previous->setNext(node);
			}
			node->setNext(current);
			break;
		}
		previous = current;
		current = current->getNext();
	}
	if(j+1 == index){
		previous->setNext(node);
	}

}

template <typename T>
void LinkedList<T>::deleteNode(T data){
	Node<T> *current = head;
	Node<T> *previous = NULL;
	while(current != NULL){
		if(current->getData() == data){
			if(previous == NULL){
				head = current->getNext();
			}
			else{
				previous->setNext(current->getNext());
			}

			// if current node has a next
			if(current->getNext())
				current->setNext(NULL);	
		}
		previous = current;
		current = current->getNext();
	}
}

template <typename T>
void LinkedList<T>::deleteTailNode(){
	Node<T> *current = head;
	Node<T> *previous = NULL;
	while(current->getNext() != NULL){
		previous = current;
		current = current->getNext();
	}
	previous->setNext(NULL);
}

template <typename T>
bool LinkedList<T>::search(T data){
	Node<T> *current = head;
	while(current != NULL){
		if(current->getData() == data)
			return true;
		current = current->getNext();
	}
	return false;
}

template <typename T>
int LinkedList<T>::getSize(){
	Node<T> *current = head;
	int size = 0;

	while(current != NULL){
		size++;
		current = current->getNext();
	}
	return size;
}
		
template <typename T>
void LinkedList<T>::print(){
	Node<T> *current = head;
	while(current != NULL){
		cout<<current->getData()<<" ";
		current = (current->getNext());
	}
	cout<<endl;
}

/*
int main(){
	
	LinkedList<int> list;
	
	list.insertNode(1);
	list.insertNode(8);
	list.insertNode(0);
	list.insertNode(8);
	list.insertNode(2);
	list.insertNodeAtIndex(1, 3);
	
	if(list.search(9))
		cout<<"present"<<endl;
	else
		cout<<"Not present"<<endl;

	//list.deleteNode(2);	
	list.print();
	
	if(list.search(9))
		cout<<"present"<<endl;
	else
		cout<<"Not present"<<endl;

	list.deleteNode(8);	
	list.print();
}
*/
