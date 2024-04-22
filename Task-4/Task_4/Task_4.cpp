#include <iostream>
using namespace std;

class Point 
{
private:
    int x;
    int y;
    int z;

public:
    Point(int x1 = 0, int y1 = 0, int z1 = 0)
    {
        x = x1;
        y = y1;
        z = z1;
    }

    int getPointX()
    {
        return x;
    }

    int getPointY()
    {
        return y;
    }

    int getPointZ() 
    {
        return z;
    }

    void setPointX(int newX) 
    {
        x = newX;
    }

    void setPointY(int newY) 
    {
        y = newY;
    }

    void setPointZ(int newZ) 
    {
        z = newZ;
    }
};

int main() 
{
    int x, y, z;
    cout << "Enter the coordinates of point2: ";
    cin >> x >> y >> z;
    Point p1;
    Point p2;
    p2.setPointX(x);
    p2.setPointY(y);
    p2.setPointZ(z);
    cout << "Coordinates of point1: " << p1.getPointX() << " " << p1.getPointY() << " " << p1.getPointZ() << endl;
    cout << "Coordinates of point2: " << p2.getPointX() << " " << p2.getPointY() << " " << p2.getPointZ() << endl;
    
    p2.setPointX(p2.getPointX() + 1);
    p2.setPointY(p2.getPointY() + 2);
    p2.setPointZ(p2.getPointZ() + 3);
    cout << "Coordinates of modified point point2: " << p2.getPointX() << " " << p2.getPointY() << " " << p2.getPointZ() << endl;

}