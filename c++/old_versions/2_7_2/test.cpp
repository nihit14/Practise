#include<iostream>

int main()
{
    int m{5};
    int* n=&m;
    std::cout<<"m is: "<<m<<std::endl;
    std::cout<<"n is: "<<n<<std::endl;
    std::cout<<"*n is: "<<*n<<std::endl;
    return 0;
}
