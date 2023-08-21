#include<iostream>
#include "Array.h"
using namespace std;

template <typename T>
Array<T>::Array(){
}

template <typename T>
Array<T>::Array(int size){
	this->index = 0;
	this->size = size;
	arr = new T[size];
}
	
template <typename T>
void Array<T>::getArray(){
	for(int i=0; i<sizex; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
void Array<T>::setArray(int size){
	arr = new T[size];
}
	
template <typename T>
int Array<T>::getSize(){
	return index;
}

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

template <typename T>
int Array<T>::getIndex(){
	if(index == 0)
	{
		cout<< "Array is empty!!" << endl;
		return -1;
	}
	return index-1;
}


template <typename T>
bool Array<T>::isEmpty(){
	if(index == 0)
		return true;
	return false;
}


template <typename T>
void Array<T>::addElement(T data){
	if(index >= size || index < 0){
		cout << "index out of bounds! Unable to insert "<< data << " in the array" << endl;
		return;
	}
	
	arr[index] = data;
	index++;
}

template <typename T>
void Array<T>::setElement(int ind, T data){
        if(ind >= size || ind < 0){
                cout << "index out of bounds! Unable to insert "<< data << " in the array" << endl;
                return;
        }

        arr[ind] = data;
        //index++;
}

template <typename T>
void Array<T>::deleteElement(T data){
	int flag = 0;
	if(index == 0){
		cout << "Array is empty!!" << endl;
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
void Array<T>::deleteElementFromEnd(){
	index--;
	if(index == 0)
		cout<<"Array is empty now."<<endl;
		
}

template <typename T>
bool Array<T>::search(T data){
	for(int i=0; i<index; i++){
		if(arr[i] == data)
			return true;
	}
	return false;
}

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
