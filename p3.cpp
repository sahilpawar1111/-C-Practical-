#include <iostream>

using namespace std;


class Shape {
private:
    string color;
    double area;

public:
    
    void setColor(string c) 
	{
        color = c;
    }

    
    string getColor() 
	{
        return color;
    }

    
    void setArea(double a)
	 {
        area = a;
    }

   
    double getArea() 
	{
        return area;
    }
};


class Circle : public Shape
 {
	private:
    double radius;

public:
    void setRadius(double r)
	 {
        radius = r;
    }

    void calculateArea() 
	{
        double a = 3.14159 * radius * radius;
        setArea(a); 
    }
};


class Rectangle : public Shape
 {
private:
    double length, width;

public:
    void setDimensions(double l, double w)
	 {
        length = l;
        width = w;
    }

    void calculateArea() {
        double a = length * width;
        setArea(a); 
    }
};

int main()
 {
    Circle c;
    Rectangle r;

    
    c.setColor("blue");
    c.setRadius(5);
    c.calculateArea();

    cout << "Circle Color: " << c.getColor() << endl;
    cout << "Circle Area: " << c.getArea() << endl;

    
    r.setColor("yellow");
    r.setDimensions(4, 6);
    r.calculateArea();

    cout << "\nRectangle Color: " << r.getColor() << endl;
    cout << "Rectangle Area: " << r.getArea() << endl;

    return 0;
}
