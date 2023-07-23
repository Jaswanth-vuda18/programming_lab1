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
		Node<T> *current = head;
		Node<T> *temp = new Node(data);
		if(head == NULL){
			head = temp;
			return;	
		}
		while(current->getNext() != NULL){
			current = current->getNext();
		}
		current->setNext(temp);
	}	
	void deleteNode(T data){
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

	bool search(T data){
		Node<T> *current = head;
		while(current != NULL){
			if(current->getData() == data)
				return true;
			current = current->getNext();
		}
		return false;
	}

	void print(){
		Node<T> *current = head;
		while(current != NULL){
			cout<<current->getData()<<" ";
			current = (current->getNext());
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
	list.insertNode(2);
	
	if(list.search(9))
		cout<<"present"<<endl;
	else
		cout<<"Not present"<<endl;

	list.deleteNode(2);	
	list.print();
	
	if(list.search(9))
		cout<<"present"<<endl;
	else
		cout<<"Not present"<<endl;

	list.deleteNode(8);	
	list.print();
}
