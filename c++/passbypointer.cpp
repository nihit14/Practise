#include <iostream>
using namespace std;

void passbyPtr(int * ptr);

int main()
{
        int x = 10;
	int* pointer;
        cout << "x = " << x <<endl;
        cout << "Address of x = " << &x <<endl;
        cout << "pointer = " << pointer <<endl;
	cout << "Value at address pointer = " << *pointer <<endl;
        cout << "Address of pointer = " << &pointer <<endl;       
	pointer = &x;
	passbyPtr(pointer);
        return 0;

}

void passbyPtr(int * ptr)
{
	cout << "value at address ptr = " << *ptr << endl; 
	cout << "ptr = " << ptr <<endl;
        cout << "Address of ptr = " << &ptr <<endl;
}

