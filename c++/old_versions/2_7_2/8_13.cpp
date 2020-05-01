#include <iostream>

class Random
{
private:
    int m_value;
public:
    Random():m_value(0){}
    void add(int value)
    {
        m_value += value;

    }
    friend void reset(Random &random);
};
void reset(Random &random)
{
    random.m_value=0;
}
int main()
{

    Random number;
    number.add(5);
    reset(number);
    return 0;

}
