#include <iostream>
#include <cmath>
using namespace ::std;

class Point
{
private:
    int a;
    int b;

public:
    Point(int a = 10, int b = 20)
    {
        this->a = a;
        this->b = b;
        cout << "init:" << a << "," << b << endl;
    }
    ~Point(void)
    {
        cout << "Destructor!" << endl;
    }
    friend void show(Point p);
};

void show(Point p)
{
    cout << "The value of a is " << p.a << ", the value of b is " << p.b << endl;
}

class Circle : public Point
{
private:
    int r;

public:
    Circle(int x, int y, int r) : Point(x, y)
    {
        this->r = r;
        // this->a = x;
        // this->b = y;
        // Point(x, y);
    };
    double Area()
    {
        double area = 2 * M_PI * pow(this->r, 2);
        return area;
        // cout << "Area: " << area << endl;
    }
};

int main()
{
    Circle c1(8, 5, 10);
    double area = c1.Area();
    cout << "Area:" << area << endl;

    // Point p1;
    // show(p1);
    show(c1);
};