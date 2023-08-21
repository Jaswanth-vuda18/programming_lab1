#ifndef _STACK_H_
#define _STACK_H_
#include "Array.h"

template <typename T> 
class Stack{

private:
	Array<T> stack;

public:

	Stack(int);

	void push(T);

	void pop();

	bool isEmpty();

	T top();
};

#include "Stack.cpp"
#endif 
