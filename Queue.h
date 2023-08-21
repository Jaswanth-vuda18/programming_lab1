#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "LinkedList.h"
template <typename T> 
class Queue{

private:
	LinkedList<T> queue;

public:
	Queue();
	void push(T data);
	void pop();
	bool isEmpty();
	T front();
};
#include "Queue.cpp"

#endif
