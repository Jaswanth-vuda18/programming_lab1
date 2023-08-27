#ifndef _ARRAY_H_
#define _ARRAY_H_
template <typename T>
class Array{
private:
	int size;
	// int index;
	T* arr;

public:
	Array();
	Array(int);
	T* operator->();
	T &operator[](int);
	T* release();
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
#include "Array.cpp"
#endif
