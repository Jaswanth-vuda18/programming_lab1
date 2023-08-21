#ifndef _STACK_H_
#define _STACK_H_

#include "LinkedList.h"

template <typename T>
class Stack{
private:
	LinkedList<T> stack;
public:
	Stack();
	void push(T);
	void pop();
	bool isEmpty();
	T top();
};

#include "Stack.cpp"
#endif
