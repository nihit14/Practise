#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int* ptr;
	int var;
	int foo;
	var = 7;
	foo = 10;
	cout << ptr <<" is the value of the variable ptr."<<endl;
	cout << *ptr <<" is the random value of where the pointer is pointing."<<endl;
	cout << var <<" is the value of the variable var."<<endl;
	cout << &var <<" is the address of the variable var."<<endl;
	ptr = &var;
	cout << ptr <<" new value of the variable ptr after pointing to variable var."<<endl;
	cout <<"Now we change to pointer to point to the address of the foo varibale."<<endl;
	ptr = &foo;
	cout << foo <<" is the value of the variable foo."<<endl;
        cout << &foo <<" is the address of the variable foo."<<endl;
        cout << ptr <<"is the new value of the varible ptr."<<endl;
	return 0;
}
