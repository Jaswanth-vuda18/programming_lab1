#include<iostream>
#include "DynamicArray.h"
const int _DEFAULT_ARR_SIZE = 1;
using namespace std;

template <typename T>
DynamicArray<T>::DynamicArray() : arr(new T[_DEFAULT_ARR_SIZE]), 
				  size(_DEFAULT_ARR_SIZE),
				  index(0){}

template <typename T>
DynamicArray<T>::DynamicArray(int n) : arr(new T[n]),
				       size(n),
				       index(0){}

template <typename T>
DynamicArray<T>::DynamicArray(int n, const T &data)
{
	size = n;
	index = n;
	arr = new T[size];
	for(int i=0;i<n;i++){
		arr[i] = data;
	}
}


template <typename T>
T* DynamicArray<T>::operator->(){
	return arr;
}

template <typename T>
T& DynamicArray<T>::operator[](int i){
	/*if(i >= index){
		cout << "Index out of bounds" << endl;
		return -1;
	}*/
	return arr[i];
}
	
template <typename T>
void DynamicArray<T>::getArray(){
	for(int i=0; i<index; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
void DynamicArray<T>::resize(int n){
	// if(n > size)
	// {
	Array<T> newArr(n);
	for(int i=0;i<index;i++){
		newArr[i] = arr[i];
	}
	delete[] arr;
	arr = newArr.release();
	size = n;
	// }
}
/*

template <typename T>
void Array<T>::setArray(int size){
	arr = new T[size];
}
*/

	
template <typename T>
int DynamicArray<T>::getSize(){
	return index;
}

/*
template <typename T>
T Array<T>::getElement(int ind){
	if(ind >= size)
	{
		cout << "Index out of bounds!!!" <<endl;
		return -1;
	}
	if(ind >= index){
		cout << "Element might not be inserted, garbage value!!" << endl;
		return -1;
	}
	return arr[ind];
}
*/

template <typename T>
int DynamicArray<T>::getIndex(){
	if(index == 0)
	{
		cout<< "Array is empty!!" << endl;
		return -1;
	}
	return index-1;
}


template <typename T>
bool DynamicArray<T>::isEmpty(){
	if(index == 0)
		return true;
	return false;
}



template <typename T>
void DynamicArray<T>::addElement(const T &data){
	if(index == size)
		resize(2*size);
	arr[index] = data;
	index++;	
}

/*
template <typename T>
void Array<T>::setElement(int ind, T data){
        if(ind >= size || ind < 0){
                cout << "index out of bounds! Unable to insert "<< data << " in the array" << endl;
                return;
        }

        arr[ind] = data;
        //index++;
}

*/


template <typename T>
void DynamicArray<T>::deleteElement(const T &data){
	int flag = 0;
	if(index == 0){
		cout << "Array is empty!! Unable to delete" << endl;
		return;
	}
	for(int i = 0;i < index;i++){
		if(arr[i] == data){
			int ind = i+1;
			while(ind < index){
				arr[i] = arr[ind];
				ind++;
				i++;
			}
			index--;
			flag = 1;
		}	
	}
	if(flag == 0){
		cout << "There is no such element exists in the array!" << endl;
	}
}


template <typename T>
void DynamicArray<T>::deleteElementFromEnd(){
	if(index = size/4)
		resize(size/2);
	index--;
	if(index == 0)
		cout<<"Array is empty now."<<endl;
}

/*
template <typename T>
bool Array<T>::search(T data){
	for(int i=0; i<index; i++){
		if(arr[i] == data)
			return true;
	}
	return false;
}
*/

/*
int main(){
	Array<float> a(3);
	a.addElement(0, 1.23);
	a.addElement(1, 3.54);
	a.addElement(2, 4.5);
	
	if(a.search(3))
		cout << "present" << endl;
	else
		cout << "Not present" << endl;
	

	a.getArray();
	cout << "Size of the Array: " << a.getSize() << endl;

	a.deleteElement(1.23);
	a.getArray();
	cout << "Size of the Array: " << a.getSize() << endl;
}
*/
