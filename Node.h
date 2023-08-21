#ifndef _NODE_H_
#define _NODE_H_
template <typename T>
class Node{
private:
	T data;
	Node<T> *next;

public:
	Node();
	Node(T data);
	T getData();
	Node<T>* getNext();
	void setNext(Node<T>*);
};

#include"Node.cpp"
#endif
