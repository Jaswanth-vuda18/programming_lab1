#include<iostream>
#include "Node.h"
using namespace std;

template <typename T>
Node<T>::Node(){
	this->next = NULL;
}

template <typename T>
Node<T>::Node(T data){
	this->data = data;
	this->next = NULL;
}

template <typename T>
Node<T>* Node<T>:: getNext(){
	return this->next;		
}

template <typename T>
void Node<T>::setNext(Node<T>* node){
	this->next = node;
}

template <typename T>
T Node<T>::getData(){
	return this->data;
}

