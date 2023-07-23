#include<iostream>
using namespace std;

template <typename T> class Array{
private:
	int size;
	T* arr;

public:
	Array(int size){
		this->size = size;
		arr = new T[size];
	}

	void addElement(int index, T data){
		if(index >= size || index < 0){
			cout << "index out of bounds!" << endl;
			return;
		}
		arr[index] = data;
	}
	
	void deleteElement(int index){

	}
	
	bool search(T data){
		for(int i=0; i<size; i++){
			if(arr[i] == data)
				return true;
		}
		return false;
	}

	void print(){
		for(int i=0; i < size; i++){
			cout << arr[i] << " "; 
		}
		cout << endl;
	}
};

int main(){
	Array<int> a(2);
	a.addElement(0,1);
	a.addElement(1,2);
	a.addElement(2,3);
	
	if(a.search(3))
		cout << "present" << endl;
	else
		cout << "Not present" << endl;

	a.print();
}
