#ifndef _ARRAY_H_
#define _ARRAY_H_
template <typename T>
class Array{
private:
	int size;
	int index;
	T* arr;

public:
	Array();
	Array(int);
	void getArray();
	void setArray(int);
	T getElement(int);
	void setElement(int, T);
	int getIndex();
	int getSize();
	void addElement(T);
	void deleteElement(T);
	void deleteElementFromEnd();
	bool isEmpty();
	bool search(T);	
};
#include "Array.cpp"
#endif
