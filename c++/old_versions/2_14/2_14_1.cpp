#include <iostream>
int readNumber()
{
    std::cout<<"Enter an integer: ";
    int num{0};
    std::cin>>num;
    return num;

}

void writeAnswer(int a)

{
    std::cout<<"The sum of the two numbers is: "<< a<<'\n';
}
