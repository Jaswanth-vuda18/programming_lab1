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
	Node<T>* getNext(){
		return this->next;		
	}
	void setNext(Node<T>* node){
		this->next = node;
	}
	T getData(){
		return this->data;
	}
};

template <typename T> class LinkedList{
private:
	Node<T> *head;

public:
	LinkedList(){
		this->head = NULL;
	}

	void insertNode(T data){
		Node<T> *cur = head;
		Node<T> *temp = new Node(data);
		if(head == NULL){
			head = temp;
			return;	
		}
		while(cur->getNext() != NULL){
			cur = cur->getNext();
		}
		cur->setNext(temp);
	}	

	void print(){
		Node<T> *cur = head;
		while(cur != NULL){
			cout<<cur->getData()<<" ";
			cur = (cur->getNext());
		}
		cout<<endl;
	}
};

int main(){
	
	LinkedList<int> list;
	
	list.insertNode(1);
	list.insertNode(8);
	list.insertNode(0);
	list.insertNode(8);
	
	list.print();
}
