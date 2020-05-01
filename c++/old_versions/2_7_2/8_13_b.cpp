#include <iostream>
class Humidity;
class Temperatur
{
private:
    int m_temp;
public:
    Temperatur(int temp=0):m_temp(temp){}
    friend void weather(Temperatur &temp, Humidity &humid);

};


class Humidity
{
private:
    int m_humid;

public:
    Humidity(int humid=0):m_humid(humid){}
    friend void weather(Temperatur &temp, Humidity &humid);


};

void weather(Temperatur &temp, Humidity &humid)
{
    std::cout<<"Temperature is(°C): "<<temp.m_temp<<std::endl;
    std::cout<<"Humidity is : "<<humid.m_humid<<std::endl;

}

int main()
{
    Temperatur temp(10);
    Humidity humid(12);
    weather(temp,humid);
    return 0;
}
