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
	
	void getArray(){
		for(int i=0; i<size; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
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

};

int main(){
	Array<float> a(2);
	a.addElement(0, 1.23);
	a.addElement(1, 3.54);
	a.addElement(2, 4.5);
	
	if(a.search(3))
		cout << "present" << endl;
	else
		cout << "Not present" << endl;

	a.getArray();
}
