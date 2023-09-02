#include<chrono>
#include<bits/stdc++.h>
#include "DynamicArray.h"
#include "LinkedList.h"
using namespace std;
using namespace std::chrono;

int main(){
	//int n;
	int opt;
	int n;
	n = 100;
	srand(time(NULL));
	//n = rand() % 10 + 1;

	double time_1[10], time_2[10];
	cout<<"1. Insertion/deletion from end.\n2. Insertion/deletion from start and end.\n3. Insertion/deletion from any index"<<endl;
	cout << "Enter an option: " << endl;
	cin>>opt;
	switch(opt){
		case 1:{

			int t = 0;
			float prob_insertion = 0.1;
			float prob_deletion = 1 - prob_insertion;

			while(t < 10){
				clock_t start, stop;

				int no_of_insertions = prob_insertion*n;
				int no_of_deletions = prob_deletion*n;

				DynamicArray<int> arr;
				LinkedList<int> list;

				for(int i=0;i<n;i++){
					int x = rand() % 100 + 1;
					arr.addElement(x);
					list.insertNode(x);
				}

				start = clock();

				for(int i=0;i<no_of_insertions;i++){
					int x = rand() % 100 + 1;
					arr.addElement(x);
					// arr.deleteElementFromEnd();
					// list.insertNode(x);
				}

				for(int i=0;i<no_of_deletions;i++){
					// int x = rand() % 100 + 1;
					// arr.addElement(x);
					arr.deleteElementFromEnd();
					// list.insertNode(x);
				}

				stop = clock();

				time_1[t] = double(stop - start); 

				cout << "Array: \n";
				arr.getArray();

				start = clock();

				for(int i=0;i<no_of_insertions;i++){
					int x = rand() % 100 + 1;
					list.insertNode(x);
				}

				for(int i=0;i<no_of_deletions;i++){
					list.deleteTailNode();
				}
				stop = clock();
			
				time_2[t] = double(stop - start);
				cout << "\nLinkedList:\n";
				list.print();


				// // Get starting timepoint
				// auto start1 = high_resolution_clock::now();

				// for(int i=0;i<no_of_insertions;i++){
				// 	int x = rand() % 100 + 1;
				// 	arr.addElement(x);
				// 	// arr.deleteElementFromEnd();
				// 	// list.insertNode(x);
				// }

				// for(int i=0;i<no_of_deletions;i++){
				// 	int x = rand() % 100 + 1;
				// 	// arr.addElement(x);
				// 	arr.deleteElementFromEnd();
				// 	// list.insertNode(x);
				// }
			
				// // Get ending timepoint
				// auto stop1 = high_resolution_clock::now();
			
				// // Get duration. Substart timepoints to
				// // get duration. To cast it to proper unit
				// // use duration cast method
				// auto duration1 = duration_cast<microseconds>(stop1 - start1);

				// time_1[t] = duration1.count(); 

				// cout << "Array: \n";
				// arr.getArray();

				// // Get starting timepoint
				// auto start2 = high_resolution_clock::now();

				// for(int i=0;i<no_of_insertions;i++){
				// 	int x = rand() % 100 + 1;
				// 	list.insertNode(x);
				// }

				// for(int i=0;i<no_of_deletions;i++){
				// 	list.deleteTailNode();
				// }
			
				// // Get ending timepoint
				// auto stop2 = high_resolution_clock::now();
			
				// // Get duration. Substart timepoints to
				// // get duration. To cast it to proper unit
				// // use duration cast method
				// auto duration2 = duration_cast<microseconds>(stop2 - start2);
				
				// time_2[t] = duration2.count();
				// cout << "\nLinkedList:\n";
				// list.print();

				
				
			
				// // double time_taken1 = double(end1 - start1);
				// cout << "\nTime taken for insertion in Dynamic Array is : "<< duration1.count() ;
				// cout << " ms " << endl;

				// // double time_taken2 = double(end2 - start2);
				// cout << "\nTime taken for insertion in LinkedList is : " << duration2.count() ;
				// cout << " ms " << endl;
				
				cout << "---------------------------------------------------------------------------------------------------------------------"<<endl;
				prob_insertion++;
				t++;
			}
			cout << "Times for dynamic array: \n";
			for(int i=0;i<10;i++){
				cout << time_1[i] << " ";
			}
			
			cout << "\nTimes for Linkedlist: \n";
			for(int i=0;i<10;i++){
				cout << time_2[i] << " ";
			}
			
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
