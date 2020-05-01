#include<iostream>

class Random
{
private:
    static int m_number;
public:
        static int getValue(){return m_number;}
        void setValue(int number) {m_number=number ;}
};
int Random::m_number=1;

int main()
{
    Random first;
    Random second;
    first.setValue(5);
    //first.m_number=2;
    std::cout<<Random::getValue()<<std::endl;
//    std::cout<<first.m_number<<std::endl;
//    std::cout<<second.m_number<<std::endl;

}
