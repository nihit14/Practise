#include <iostream>
using namespace std;

void passbyVal(int integer);

int main()
{
	int x = 10;
       	cout << "x = " << x <<endl;	
	cout << "Address of x = " << &x <<endl;
	passbyVal(x);
	return 0;

}

void passbyVal(int integer)
{
	cout << "integer = " << integer <<endl;
	cout << "Address of integer = " << &integer <<endl;
}

