#include<iostream>
using namespace std;

template <typename T> class Node{
private:
	T data;
	Node<T>* next;

public:
	Node(){
		this->next = NULL;
	}
	Node(T data){
		this->data = data;
		this->next = NULL;
	}
};

template <typename T> class LinkedList{
	
};

int main(){
	cout<<"Hello"<<endl;
}
