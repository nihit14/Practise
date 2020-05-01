#include<iostream>

class Point3d
{
    int m_x;
    int m_y;
    int m_z;
public:

    void setValues(int a, int b, int c)
        {
            m_x=a;
            m_y=b;
            m_z=c;
        }

    void print()
    {
        std::cout<<"< "<<m_x<<","<<m_y<<","<<m_z<<" >"<<std::endl;
    }
    bool isEqual(Point3d &p)
    {
        if(m_x== p.m_x && m_y ==p.m_y && m_z == p.m_z)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    Point3d point1;
    point1.setValues(1,2,3);
    point1.print();
    Point3d point2;
    point2.setValues(1,2,3);
    Point3d point3;
    point3.setValues(2,3,4);
    if (point1.isEqual(point2))
    std::cout<<"points are equal."<<std::endl;
    else
    std::cout<<"Not equal."<<std::endl;
    if (point1.isEqual(point3))
    std::cout<<"points are equal."<<std::endl;
    else
    std::cout<<"Not equal."<<std::endl;

}
