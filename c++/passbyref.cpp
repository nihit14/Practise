#include <iostream>
using namespace std;

void passbyRef(int & ref);

int main()
{
        int x = 10;
        cout << "x = " << x <<endl;
        cout << "Address of x = " << &x <<endl;
        passbyRef(x);
        return 0;

}

void passbyRef(int &ref)
{
	
	cout << "ref = " << ref <<endl;
        cout << "Address of ref = " << &ref <<endl;
}
