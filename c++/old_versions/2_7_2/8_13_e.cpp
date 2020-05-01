#include<iostream>
class Humidity;
class Temperature
{
private:
    int m_temp;
public:
    Temperature(int temp=0):m_temp(temp){}
    friend void printWeather(Temperature &temp, Humidity &humid);
};

class Humidity
{
private:
    int m_humid;
public:
    Humidity(int humid=0):m_humid(humid){}
    friend void printWeather(Temperature &temp, Humidity &humid);
};
void printWeather(Temperature &temp, Humidity &humid)
{
    std::cout<<"Temperature is "<<temp.m_temp<<" and Humidity is "<<humid.m_humid<<" ."<<std::endl;
}

int main()
{
    Temperature temp{20};
    Humidity humid{10};
    printWeather(temp,humid);
    return 0;
}
