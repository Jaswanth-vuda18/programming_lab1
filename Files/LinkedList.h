template <typename T> class Node{
public:
	Node<T> * getNext();
	void setNext(Node<T> *);
	T getData();
};

template <typename T> class LinkedList{
public:
	Node<T> *getHead();
	bool isEmpty();
	void insertNode(T);
	void insertNodeAtIndex(int,T);
	void deleteNode(T);
	bool search(T);
	int getSize();
	void print();
};
