/*  Header files*/

#include <iostream> // <> indicates Is within the compiler should compiler checks in system directory.
#include "2_11_2.h" // Quotes indicates user defined and to look in source code directory,  user path etc


int main()
{
    std::cout<<"sum is: "<< add(4,5)<<'\n';
    return 0;
}


/*          When the user defined header file is not in the source code directory.
    1. Bad practise to use the complete path of the header file when not in the source code directory

        Eg: #include "Documents/.../.../code/add.h" // Since once changed path it will not compile as path
        changed
    2. Good practise is to tell the compiler and let it search for the header files. Project>>build options
        >> search directories(tab)..
*/
/*
                HEADERS FILE BEST PRACTISE :::: 2_11 Section
        1.Always include header guards.

        2.Do not define variables and functions in header files (global constants are an exception)

        3.Give your header files the same name as the source files they’re associated with
        (e.g. grades.h is paired with grades.cpp).

        4.Each header file should have a specific job, and be as independent as possible.
        For example, you might put all your declarations related to functionality A in A.h
        and all your declarations related to functionality B in B.h. That way if you only care about A later, you can just include A.h and not get any of the stuff related to B.

        5.Be mindful of which headers you need to explicitly include for the functionality that
        you are using in your code files Every header you write should compile on its own (it
        should #include every dependency it needs)

        6.Only #include what you need (don’t include everything just because you can).
        Do not #include .cpp files.

        7.Order your #includes as follow: your own user-defined headers first, then
        3rd party library headers, then standard library headers. This is a minor one,
        but may help highlight a user-defined header file that doesn’t directly #include everything it needs


*/
