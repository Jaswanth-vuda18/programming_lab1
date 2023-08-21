
/*
template <typename T> class Node{
private:
	T data;
	Node<T> *next;

public:
	Node<T>();
	Node<T>(T);
	Node<T> * getNext();
	void setNext(Node<T> *);
	T getData();
};
*/

#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include "Node.h"

template <typename T> class LinkedList{
private:
	Node<T> *head;
public:
	LinkedList();
	Node<T> *getHead();
	bool isEmpty();
	void insertNode(T);
	void insertNodeAtIndex(int,T);
	void deleteNode(T);
	void deleteTailNode();
	bool search(T);
	int getSize();
	void print();
};
#include "LinkedList.cpp"
#endif
