#include <iostream>
#include "add.h"
#include "subtract.h"
#include "nested_namespace.h" // Showing nested namespace

int main()
{
    std::cout<<foo::doSomething(5,5)<<std::endl;
    std::cout<<goo::doSomething(5,5)<<std::endl;
    std::cout<<nest1::nest2::addUs(3,4)<<std::endl;
    return 0;
}
