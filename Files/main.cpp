#include "Stack.h"
using namespace std;

int main(){
    Stack<int> st(100);

	st.push(1);
	st.push(2);
	st.push(3);

	cout << st.top() << endl;
	st.pop();

	st.pop();

	st.pop();

	cout << st.top() << endl;
	/*
	Array<float> a(3);
    a.addElement(1.23);
    a.addElement(3.54);
    a.addElement(4.5);
	//a.addElement(6.3);
    
    if(a.search(3))
        cout << "present" << endl;
    else
        cout << "Not present" << endl;
    

    a.getArray();
    cout << "Size of the Array: " << a.getSize() << endl;
	cout << "element : " << a.getElement(3) << " -- " << a.getElement(2) << endl;
    a.deleteElement(1.23);
	if(a.isEmpty())
		cout<<"Array is empty" << endl;
	//cout << "element : " << a.getElement(3) << " -- " << a.getElement(2) << endl;
    a.addElement(6.3);
	a.getArray();
    cout << "Size of the Array: " << a.getSize() << endl;
	*/
}

