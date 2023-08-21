#include<iostream>
#include "Stack.h"
#include "LinkedList.cpp"

using namespace std;
/*
template <typename T> 
class Stack{
private:
	LinkedList<T> stack;
public:
*/

template <typename T> 
Stack<T>::Stack(){
		//stack = new LinkedList<T>();
}

				
template <typename T> 
void Stack<T>::push(T data){
	// insert node at head 
	stack.insertNodeAtIndex(1,data);
}

template <typename T> 
void Stack<T>::pop(){
	if(stack.isEmpty()){
		cout << "stack is empty!!" << endl;
		return;
	}
	stack.deleteNode(stack.getHead()->getData());
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
	return stack.getHead()->getData();
}

void tempFunc(){
	LinkedList<int> stack;
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
