// Freind class/ functions

#include <iostream>

class Accumulator
{
private:
    int m_value;
public:
    Accumulator(int value=0):m_value(value){std::cout<<m_value<<std::endl;}

    void add(int value)
    {
        m_value +=value;
        std::cout<<m_value<<std::endl;
    }
    friend void reset(Accumulator &accumulator);
};
void reset(Accumulator &accumulator)
{
    accumulator.m_value=0;
    std::cout<<accumulator.m_value<<std::endl;
}
int main()
{
    Accumulator acc;
    acc.add(5);
    reset(acc);
    acc.add(10);
    return 0;

}
