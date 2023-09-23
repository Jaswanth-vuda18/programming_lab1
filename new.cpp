#include<iostream>
using namespace std;


int main(){
	int x = 3;
	#ifdef BFS
	cout << "BFS - " << x << endl;
	#else
	cout<<"Enter x value: ";
	cin>>x;
	cout<<"DFS - "<<x<<endl;
	#endif
	return 0;
}
