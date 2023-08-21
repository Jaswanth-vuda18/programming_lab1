#include<iostream>
#include "Stack.h"
using namespace std;

template <typename T> 
Stack<T>::Stack(int capacity){
	//stack = new Array<T>(capacity);
	stack.setArray(capacity);
}

template <typename T>
void Stack<T>::push(T data){
	stack.addElement(data);
}

template <typename T>
void Stack<T>::pop(){
	if(stack.isEmpty()){
		cout << "stack is empty!!" << endl;
		return;
	}
	stack.deleteElementFromEnd();
}

template <typename T>
bool Stack<T>::isEmpty(){
	return stack.isEmpty();
}

template <typename T>
T Stack<T>::top(){
	if(stack.isEmpty()){
		return -1;
	}
	return stack.getElement(stack.getIndex());
}

/*
int main(){
	Stack<int> st;
	st.push(1);
	st.push(2);
	cout << st.top() << endl;
	st.pop();

	st.pop();

	st.pop();

	cout << st.top() << endl;
	return 0;
}
*/
