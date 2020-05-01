#include <iostream>
class Random
{
private:
    int m_value;
public:
    Random(int value=0):m_value(value){}
    friend bool isEqual(Random &value1,Random &value2);
};
bool isEqual(Random &value1,Random &value2)
{
    return (value1.m_value==value2.m_value);
}
int main()
{
    Random value1{6};
    Random value2{7};
    std::cout<<isEqual(value1,value2)<<std::endl;
    return 0;
}
