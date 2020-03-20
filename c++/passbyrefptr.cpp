#include <iostream>
using namespace std;

void passbyRefPtr(int * & refptr);

int main()
{
        int x = 10;
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
	passbyRefPtr(pointer);
        return 0;

}
void passbyRefPtr(int * & refptr)
{
	
	cout << "int * & refptr = pointer // A reference(refptr) is creater to the pointer from main function (pointer)  " << endl;
	cout << "At this point pointer and refptr can access the variable x and refptr is reference to pointer" <<endl;
	cout << "refptr = " << refptr <<endl; // refptr value should be same as pointer as it is reference to the pointer
	cout << "Value that it refers to through pointer = " << *refptr <<endl; // should be same as pointer as it is reference to pointer
	cout << "Address of refptr = " << &refptr <<endl; // Same as pointer as it is reference to the pointer
}


