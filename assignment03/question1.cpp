

#include<iostream>
using namespace std;

class Cylinder
{
    private:
    double radius;
    double height;
    public : static const double pi;
    
    Cylinder()
    {
        radius = 0;
        height = 0;
    }

    Cylinder(double radius, double height) : radius (radius), height(height)
    {
        
    }

    void setRadius(double radius)
    {
        this -> radius = radius;
    }
    double getRadius()
    {
        return radius;
    }

    void setHeight(double height)
    {
        this -> height = height;
    }
    double getHeight()
    {
        return height;
    }
     
    double getVolume()
    {
        return  pi*radius*radius*height;
    }
    
    void printVolume()
    {
    cout << "VOLUME OF THE CYLINDER = " << getVolume() << endl;
    }


};
 const double Cylinder::pi = 3.14;


int main()
{
    Cylinder c;
    Cylinder c1(5,6);
    c1.printVolume();

}
