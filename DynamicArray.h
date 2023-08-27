#ifndef _DARRAY_H_
#define _DARRAY_H_

#include "Array.h"

template <typename T>
class DynamicArray{
private:
	int size;
	int index;
	T* arr;

public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(int,const T&);
	T* operator->();
	T& operator[](int);
	void resize(int);
	void getArray();
	void setArray(int);
	T getElement(int);
	void setElement(int, T);
	int getIndex();
	int getSize();
	void addElement(const T&);
	void deleteElement(const T&);
	void deleteElementFromEnd();
	bool isEmpty();
	bool search(T);	
};
#include "DynamicArray.cpp"
#endif
