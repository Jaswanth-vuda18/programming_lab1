#include<fstream>
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
	double t_1[10][10], t_2[10][10];

	ofstream outFile1;
	ofstream outFile2;
	
	cout<<"1. Insertion/deletion from end.\n2. Insertion/deletion from start and end.\n3. Insertion/deletion from any index"<<endl;
	cout << "Enter an option: " << endl;
	cin>>opt;
	switch(opt){
		case 1:{

			int t = 0;
			float prob_insertion = 0.1;
			float prob_deletion = 0.9;

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

				
				cout << "---------------------------------------------------------------------------------------------------------------------"<<endl;
				prob_insertion += 0.1;
				prob_deletion -= 0.1;
				t++;
			}
			cout << "Average time for dynamic array: ";
			double avg = 0;
			for(int i=0;i<10;i++){
				avg += time_1[i];
				// cout << time_1[i] << " ";
			}
			cout << avg/10 << " seconds" << endl;
			avg = 0;
			cout << "\nAverage time for Linkedlist: \n";
			for(int i=0;i<10;i++){
				avg += time_2[i];
				// cout << time_2[i] << " ";
			}
			cout << avg/10 << " seconds" << endl;
			break;

		}
		case 2:{
			int t = 0;

			outFile1.open("output1.txt");
			outFile2.open("output2.txt");

			float prob_insertion = 0.1;
			float prob_deletion = 0.9;
			

			while(t < 10){
				clock_t start, stop;

				int no_of_insertions = prob_insertion*n;
				int no_of_deletions = prob_deletion*n;
				
				float start_prob = 0.1;
				float end_prob = 0.9;
				

				int p = 0;
				double avg1=0, avg2=0;
				
				while(p < 10){
				
					DynamicArray<int> arr;
					LinkedList<int> list;
					for(int i=0;i<n;i++){
						int x = rand() % 100 + 1;
						arr.addElement(x);
						list.insertNode(x);
					}
					int ins_from_start = start_prob*no_of_insertions;
					int ins_from_end = end_prob*no_of_insertions;
					
					int del_from_start = start_prob*no_of_deletions;
					int del_from_end = end_prob*no_of_deletions;


					start = clock();

					for(int i=0;i<ins_from_start;i++){
						int x = rand() % 100 + 1;
						arr.addElementAtStart(x);
						// arr.deleteElementFromEnd();
						// list.insertNode(x);
					}
					for(int i=0;i<ins_from_end;i++){
						int x = rand() % 100 + 1;
						arr.addElement(x);
						// arr.deleteElementFromEnd();
						// list.insertNode(x);
					}

					for(int i=0;i<del_from_start;i++){
						// int x = rand() % 100 + 1;
						// arr.addElement(x);
						arr.deleteElementFromStart();
						// list.insertNode(x);
					}

					for(int i=0;i<del_from_end;i++){
						// int x = rand() % 100 + 1;
						// arr.addElement(x);
						arr.deleteElementFromEnd();
						// list.insertNode(x);
					}

					stop = clock();

					t_1[t][p] = double(stop - start); 
					outFile1 << t_1[t][p] << " ";


					cout << "\nArray: \n";
					arr.getArray();

					start = clock();

					for(int i=0;i<ins_from_start;i++){
						int x = rand() % 100 + 1;
						list.insertNodeAtIndex(1,x);
					}
					for(int i=0;i<ins_from_end;i++){
						int x = rand() % 100 + 1;
						list.insertNode(x);
					}

					for(int i=0;i<del_from_start;i++){
						list.deleteNode(list.getHead()->getData());
					}
					for(int i=0;i<del_from_end;i++){
						list.deleteTailNode();
					}

					stop = clock();
				
					t_2[t][p] = double(stop - start);
					outFile2 << t_2[t][p] << " ";

					cout << "LinkedList:\n";
					list.print();
					start_prob += 0.1;
					end_prob -= 0.1;
					p++;
				}
				outFile1<<endl;
				outFile2<<endl;
				// t_1[t] = avg1/10;
				// t_2[t] = avg2/10;

				prob_insertion += 0.1;
				prob_deletion -= 0.1;
				t++;
			}
			cout << "\nAverage time for DynamicArray: \n";
			for(int i=0;i<10;i++){
				// cout << " " << i << "%" <<
				for(int j=0;j<10;j++){
					cout << t_1[i][j] << " ";
				}
				cout << endl;
			}
			cout << "\nAverage time for Linkedlist: \n";
			for(int i=0;i<10;i++){
				for(int j=0;j<10;j++){
					cout << t_2[i][j] << " ";
				}
				cout << endl;
			}
			outFile1.close();
			outFile2.close();
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
