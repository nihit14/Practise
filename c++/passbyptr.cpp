#include <iostream>
using namespace std;

void passbyPtr(int * ptr);

int main()
{
        int x = 10;
        cout << "x = " << x <<endl; // Prints the value of variable x
        cout << "Address of x = " << &x <<endl;  // Address where the variable x is located in the memory
        int* pointer;  // Declaring a pointer but not intialising it
        cout << "Pointer information before pointing to any variable "<< endl;
	cout << "pointer = " << pointer <<endl; // Print the value that it stores in this case random address value
        cout << "Value that pointer reference to  = " << *pointer <<endl; // Print the value/variable it refers to this case random
        cout << "Address of the pointer  = " << &pointer <<endl; // Address where the pointer variable is located in the memory
        cout << "Pointer information after pointing to variable x "<< endl;       
	pointer = &x; // Intialising the pointer variable which now points to the memory of variable x
	cout << "value of pointer -> x = " << pointer <<endl; // should be the same address as the address of the variable x
	cout << "Value that pointer now points to = " << *pointer <<endl; // should be the value of the variable x 
        cout << "Address of the pointer  = " << &pointer <<endl; // Should be same as before 
	cout << "After calling the function callbyPtr it creates a copy of pointer variable as ptr" <<endl;
	passbyPtr(pointer);
        return 0;

}
void passbyPtr(int * ptr)
{
	
	cout << "int * ptr = pointer // pointer from main function (Copy created) " << endl;
	cout << "At this point two pointers ptr and pointer refers to the variable x" <<endl;
	cout << "ptr = " << ptr <<endl; // ptr value it should be same as pointer as it is a copy
	cout << "Value that it refers to = " << *ptr <<endl; // should be same as pointer
	cout << "Address of ptr = " << &ptr <<endl; // Should be different to the pointer as it is a copy

}

