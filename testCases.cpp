#include<iostream>
#include<bits/stdc++.h>
#include "DynamicArray.h"
#include "LinkedList.h"
using namespace std;

int main(){
	//int n;
	int opt;
	srand(time(NULL));
	//n = rand() % 10 + 1;
	while(1){
		int n;
		n = rand() % 10 + 1;
		cout<<"1. Insertion/deletion from end.\n2. Insertion/deletion from start and end.\n3. Insertion/deletion from any index"<<endl;
		cout << "Enter an option: " << endl;
		cin>>opt;
		switch(opt){
			case 1:{
				DynamicArray<int> arr(n);
				LinkedList<int> list;
				
				for(int i=0;i<n;i++){
					int x = rand() % 100 + 1;
					arr.addElement(x);
					list.insertNode(x);
				}
				cout << "Array: \n";
				arr.getArray();
				cout << "\nLinkedList:\n";
				list.print();
				
				break;

			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
			default:{ 
				break;
			}
		}
	}
}
