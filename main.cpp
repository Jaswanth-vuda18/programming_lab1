#include<iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;


int main(){
    Stack<int> st;
	Queue<int> q;

	st.push(1);
    st.push(2);
	st.push(3);
	st.push(4);
    q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout << "top of Stack: "<<st.top() << endl;
	cout<<"front of queue: "<<q.front()<<endl;
    st.pop();
	q.pop();
    st.pop();
	q.pop();
    st.pop();
	q.pop();
    cout << "top of stack: " << st.top() << endl;
	cout<<"front of queue: "<<q.front()<<endl;
    return 0;
}

