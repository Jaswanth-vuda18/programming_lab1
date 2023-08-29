#include<chrono>
#include<bits/stdc++.h>
#include "DynamicArray.h"
#include "LinkedList.h"
using namespace std;
using namespace std::chrono;

int main(){
	//int n;
	int opt;
	srand(time(NULL));
	//n = rand() % 10 + 1;
	while(1){
		int n;
		n = 100;
		time_t start1, end1;
		time_t start2, end2;
		cout<<"1. Insertion/deletion from end.\n2. Insertion/deletion from start and end.\n3. Insertion/deletion from any index"<<endl;
		cout << "Enter an option: " << endl;
		cin>>opt;
		switch(opt){
			case 1:{
				DynamicArray<int> arr(n);
				LinkedList<int> list;

				// Get starting timepoint
				auto start1 = high_resolution_clock::now();
 
				for(int i=0;i<n;i++){
					int x = rand() % 100 + 1;
					arr.addElement(x);
					// list.insertNode(x);
				}
			
				// Get ending timepoint
				auto stop1 = high_resolution_clock::now();
			
				// Get duration. Substart timepoints to
				// get duration. To cast it to proper unit
				// use duration cast method
				auto duration1 = duration_cast<microseconds>(stop1 - start1);

				cout << "Array: \n";
				arr.getArray();

				// Get starting timepoint
				auto start2 = high_resolution_clock::now();
 
				for(int i=0;i<n;i++){
					int x = rand() % 100 + 1;
					list.insertNode(x);
				}
			
				// Get ending timepoint
				auto stop2 = high_resolution_clock::now();
			
				// Get duration. Substart timepoints to
				// get duration. To cast it to proper unit
				// use duration cast method
				auto duration2 = duration_cast<microseconds>(stop2 - start2);
				
				cout << "\nLinkedList:\n";
				list.print();

				
				
			
				// double time_taken1 = double(end1 - start1);
    			cout << "\nTime taken for insertion in Dynamic Array is : "<< duration1.count() ;
    			cout << " ms " << endl;

				// double time_taken2 = double(end2 - start2);
				cout << "\nTime taken for insertion in LinkedList is : " << duration2.count() ;
    			cout << " ms " << endl;
				
				int count = 90;
				// Get starting timepoint
				auto start3 = high_resolution_clock::now();
 
				for(int i=0;i<count;i++){
					// int x = rand() % 100 + 1;
					// arr.addElement(x);
					// list.insertNode(x);
					arr.deleteElementFromEnd();
				}
			
				// Get ending timepoint
				auto stop3 = high_resolution_clock::now();
			
				// Get duration. Substart timepoints to
				// get duration. To cast it to proper unit
				// use duration cast method
				auto duration3 = duration_cast<microseconds>(stop3 - start3);

				cout << "Array: \n";
				arr.getArray();

				// Get starting timepoint
				auto start4 = high_resolution_clock::now();
 
				for(int i=0;i<count;i++){
					// int x = rand() % 100 + 1;
					// list.insertNode(x);
					list.deleteTailNode();
				}
			
				// Get ending timepoint
				auto stop4 = high_resolution_clock::now();
			
				// Get duration. Substart timepoints to
				// get duration. To cast it to proper unit
				// use duration cast method
				auto duration4 = duration_cast<microseconds>(stop4 - start4);
				
				cout << "\nLinkedList:\n";
				list.print();

				
				
			
				// double time_taken1 = double(end1 - start1);
    			cout << "\nTime taken for deletion(prob of insertion is "<< count <<"% ) in Dynamic Array is : "<< duration3.count() ;
    			cout << " ms " << endl;

				// double time_taken2 = double(end2 - start2);
				cout << "\nTime taken for deletion(prob of insertion is " << count <<"% ) in LinkedList is : " << duration4.count() ;
    			cout << " ms \n" << endl;
				
				cout << "---------------------------------------------------------------------------------------------------------------------"<<endl;

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
